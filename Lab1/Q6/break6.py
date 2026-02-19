from datetime import datetime
import hashlib
import subprocess

def sha256(s):
    h = hashlib.sha256()
    h.update(s.encode('utf-8'))
    return h.hexdigest()

def find():
    # Load salted password records
    records = []
    with open('SaltedPWs', 'r', encoding='utf-8') as f:
        for line in f:
            if not line.strip():
                continue
            parts = line.strip().split(',')
            if len(parts) != 3:
                continue
            user, salt, target_hash = parts
            records.append((user, salt, target_hash))


    with open('PwnedPWs100k', 'r', encoding='utf-8') as f:
        base_passwords = [x.strip() for x in f]


    with open('results_q6.txt', 'w', encoding='utf-8') as out:
        for user, salt, target_hash in records:
            for base in base_passwords:
                for digit in range(10):
                    guess = f"{base}{digit}"
                    guess_hash = sha256(salt + guess)

                    if guess_hash == target_hash:
                    
                        res = subprocess.run(
                            ["python3", "Login.pyc", user, guess],
                            capture_output=True,
                            text=True
                        )

                        if "Login successful" in res.stdout:
                            print(f"{user} {guess}")
                            out.write(f"{user} {guess}\n")
                            out.flush()
                            break
                else:
                    continue
                break

def main():
    print(datetime.now())
    find()
    print(datetime.now())

if __name__ == "__main__":
    main()