# OPENCV DEV files in C++

## Using Open CV libs for mac
https://opencv.org/  
https://github.com/opencv/opencv

### Using Xcode Version 14.3.1

### Steps:
- download opencv: https://formulae.brew.sh/formula/opencv
- Create a C++ project in Xcode
- Drag and drop all .dylib files from cellr into project folder in Xcode, copy if necessary option true
- Add "Header Search Paths" : project--> targets--> build Settings--> Header Search Paths : /opt/homebrew/Cellar/opencv/4.9.0_1/include/** (recursive)
- Check if "Library Search Paths" is set to your working folder, if not Add: project--> targets--> build Settings--> Header Search Paths : $(PROJECT_DIR)/<ProjectName>
- Set your working Directory: Product--> Scheme--> Edit Scheme--> Run--> Options--> Working Directory: True --> Use Custom Directory: $(PROJECT_DIR)/<ProjectName>

With that setup files/images in your project folder can be loaded without absolute paths
