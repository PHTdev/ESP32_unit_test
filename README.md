# ESP32_unit_test

# Install Github Action runner on your PC
Please refer the instructions on Action/Runner page

![image](https://user-images.githubusercontent.com/87544578/212491660-edd51257-6c79-417e-b49a-35fdaaca861e.png)

# Configure your Action runner
Please refer the instructions on Action/Runner page

./config.sh --url {Your repo URL} --token {YOUR TOKEN}

- On configuration steps, you can skip "Group Name"
- You can set your runner name and label name
- You have to replace label name in workflow yml file
  
  runs-on: {YOUR LABEL NAME}
  
# Run Action runner
 ./run.sh


