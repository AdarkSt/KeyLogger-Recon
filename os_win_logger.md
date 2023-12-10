# Windows OS Level Keylogger

## Overview

This C++ program is a basic keylogger designed for collecting key logs from whole OS when it is runned. The keylogger captures keystrokes and logs them to a file named `key_file.txt`. Programm can be runned as background job and collect Passwords or other sensitive inputs from target machine. Please note that the use of keyloggers for any malicious or unauthorized activities is strictly prohibited.

## Features

- **Keylogging:** Captures and logs keystrokes to a file.
- **Special Key Handling:** Recognizes and logs special keys such as Shift, Escape, Enter, Control, Alt, Delete, Tab, and Backspace.
- **Sending(Incoming):** In new implementation will be provided improvement which will make connection with remote server and after that will capture keystrokes from target OS and send it to remote server (for example CAC server)

## How it Works

The keylogger uses the Windows API to capture keystrokes and writes them to a file. Special keys are identified and logged with corresponding labels.

## Getting Started

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/AdarkSt/KeyLogger-Recon.git
    ```

2. **Compile and Run:**

    Compile the program using your preferred C++ compiler and run the executable. Ensure that you have the necessary permissions to write to the file system.

3. **View Logs:**

    Open the `key_file.txt` file to view the logged keystrokes.

## Usage

Use it responsibly and in compliance with applicable laws and ethical standards. Do not use this keylogger for any unauthorized or malicious activities.

## Special Key Handling

The keylogger recognizes the following special keys:

- **Shift:** [SHIFT]
- **Escape:** [ESCAPE]
- **Enter:** [ENTER]
- **Control:** [CONTROL]
- **Alt:** [ALT]
- **Delete:** [DELETE]
- **Tab:** [TAB]
- **Backspace:** [BACKSPACE]

## License
---

**Note:** The use of keyloggers without explicit consent is illegal and unethical. The C++ Keylogger is meant for educational purposes only, and users are expected to comply with all relevant laws and regulations.

For any questions or concerns, please [open an issue](https://github.com/your-username/your-repo/issues).
