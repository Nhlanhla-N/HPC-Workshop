# BOWS Team Submission

## 1. SSH Service Status
```command:
systemctl status sshd
```
![ssh-status](https://github.com/user-attachments/assets/a97c58b3-06ef-4226-9b9e-d26166c4cb17)

## 2. Running Services
```command:
systemctl list-units --type=service --state=running
```
![Running services](https://github.com/user-attachments/assets/3c6af675-e1c4-43f7-b3be-9a4c5a17e196)


## 3. SSH Process Identification
```command:
htop
# Press F3, search for "sshd"
```
![htop-proesses](https://github.com/user-attachments/assets/3643cef1-3e4f-4022-a119-a48aadc01e83)


## 4. Node Exporter Metrics (Grafana Alternative)
![node-metrics](https://github.com/user-attachments/assets/29011948-1ae1-4477-9cf1-f55be4c75b53)

## 5. CPU Details (tmux)
```command:
tmux new-session -s cpu
# Split window (Ctrl+B %)
# Run in left pane:
lscpu | grep -E 'Architecture|Core|Flags'
# In right pane:
ssh com2 "lscpu | grep -E 'Architecture|Core|Flags'"
```
![cpu-details](https://github.com/user-attachments/assets/8320a49e-fd91-4b60-a320-f7e4a18fc1e6)

## 6. SSH Logs
```command:
journalctl -u sshd --since "1 hour ago"
```
![ssh-logs](https://github.com/user-attachments/assets/41093daa-178b-4d40-83a3-f01a00bfb416)


