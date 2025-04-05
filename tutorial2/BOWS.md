#Status of SSH service on headnode.

Use command prompt "systemctl status sshd"
(![Screenshot 2025-04-05 213631](https://github.com/user-attachments/assets/0c65b1e9-bda6-4299-9ce2-716c97df2de9)
)

#list of running services.

use command "systemctl"
![Screenshot 2025-04-05 214946](https://github.com/user-attachments/assets/7a570f26-1e5d-4a42-994b-9a829d3058f4)

#Identify the SSH process.
//These display the full process listing filtering the "ps" output. Only shows lines with "sshd" using command "ps -Af | grep sshd"
![Screenshot 2025-04-05 225357](https://github.com/user-attachments/assets/b4bb4c53-b6b6-4bb4-be83-aaec4d1803ba)
This what you get using command "htop"
![Screenshot 2025-04-05 215655](https://github.com/user-attachments/assets/cf9946ef-0315-4790-a124-5af6f7c6416f)

#
