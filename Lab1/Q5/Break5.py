from datetime import datetime
import hashlib
import subprocess

def sha256(s):
    h = hashlib.sha256()
    h.update(s.encode('utf-8'))
    return h.hexdigest()

def find():
    # Load hashed passwords: hash -> user
    hashed_db = {}
    with open('HashedPWs', 'r', encoding='utf-8') as f:
        for line in f:
            if not line.strip():
                continue
            user, hashed_pw = line.strip().split(',')
            hashed_db[hashed_pw] = user

    # Load base passwords
    with open('PwnedPWs100k', 'r', encoding='utf-8') as f:
        base_passwords = [x.strip() for x in f]

    found = set()

    for base in base_passwords:
        for i in range(100):
            guess = f"{base}{i:02d}"
            guess_hash = sha256(guess)

            if guess_hash in hashed_db:
                user = hashed_db[guess_hash]

                if user in found:
                    continue

                # Verify against login program
                res = subprocess.run(
                    ["python3", "Login.pyc", user, guess],
                    capture_output=True,
                    text=True
                )

                if "Login successful" in res.stdout:
                    print(f"{user} {guess}")
                    found.add(user)

def main():
    print(datetime.now())
    find()
    print(datetime.now())

if __name__ == "__main__":
    main()