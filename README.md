# DigiSpark Windows Hacking Tool

This project contains a code snippet written for the DigiSpark microcontroller, designed to exploit Windows systems. The script utilizes the DigiKeyboard library to automate commands in PowerShell.

## Features
- Disables Windows Defender Real-time Monitoring.
- Downloads and executes a specified file from a URL.
- Designed for educational purposes and ethical hacking.

## Usage
1. Upload the code to your DigiSpark board using the Arduino IDE.
2. Connect the DigiSpark to a Windows computer via USB.
3. The script will automatically execute upon connection.

### Code Explanation
- The script first simulates the Windows + R key press to open the Run dialog.
- It then runs PowerShell as an administrator and disables real-time monitoring of Windows Defender.
- Next, it downloads a file from a specified URL and executes it silently on startup.

## Important Notes
- **Ethical Use**: This tool should only be used for educational purposes and ethical hacking within legal boundaries. Do not use it on systems without proper authorization.
- **Virus Alerts**: The actions performed by this script may trigger antivirus alerts due to its nature. Use with caution.

## YouTube Video
For a detailed walkthrough of the project, including setup and execution, check out my YouTube video: [هک کامپیوتر با USB دیجی‌ اسپارک | آموزش Bad USB | هک ویندوز با متاسپلویت ]([link_to_your_video](https://youtu.be/RmiWn_XhvTg)).

In the video, I demonstrate how to upload the code to the DigiSpark, connect it to a Windows machine, and explain the functionalities of the script. Don't forget to like, subscribe, and leave your feedback!

## Disclaimer
The author is not responsible for any misuse or damage caused by this tool. Ensure you have permission before testing on any systems.
