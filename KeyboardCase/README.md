# Keyboard Case
A 3D modelling software is required to design the case. I have tried many but only Siemens NX12 cut it. Do not ask me whether I bought it. Instead of answering that question, I will share with you, in addition to the .stl files and NX12 source files, the design process.  

"GeneralAnthropometricData" contains anthropometric data for the world's population.   
"Images/MeasurementMethods/" constains photos illustrating how I took my own anthropometric data.  
"PastVersions" cotains all past versions in compressed .rar format.  

## Siemens NX Modelling
I have parametrically modelled the case after my own hand, as my height of 1.7m is world's average. This guide is based on the EVK version 1.2.  

### 0. Find the Natural Path (spline) Travelled by the Middle Finger.
Put a piece of paper on the table. Rest the left hand on the piece of paper and point the palm horizontally to the right. Use a pen to mark the path travelled by the middle finger onto the paper as one curls the finger.  
<!-- <img src="./Images/MidFingerPath0.jpg" width="500"> -->
<img src="./Images/MidFingerPath0.jpg">
I used the middle finger because it's the longest finger. Other fingers should trace the same spline profile.  
Import the raster image into NX12 and sketch the spline. Then, tilt each key along the spline to further fit the finger actions. See "ASM_MASTER_MidFingeColumn.prt".  
<img src="./Images/ASM_MASTER_MidFingeColumn0.PNG">  

### 1. Mount the Keys onto the mid finger column
Create the key assembly in "ASM_Key.prt":  
<img src="./Images/ASM_Key0.PNG"> 
 
Mount the keys to the midfinger's path of travel in "ASM_MASTER_MidFingeColumn.prt":  
<img src="./Images/ASM_MASTER_MidFingeColumn1.PNG">   

### 2. Create family parts for the other fingers 
See "ASM_SLAVE_LittleFingerColumn.prt",  "ASM_ThumbPlate.prt".  
<img src="./Images/PartFamilies.PNG">  

### 3. Put all finger columns together
See "ASM_Case_LeftHand.prt".  
Path Constraints:  
<img src="./Images/ASM_Case_LeftHand0.png">  
Resulting Positions of the Key Mounts:  
<img src="./Images/ASM_Case_LeftHand1.png>  
Use NX12 Bridge Curves, Studio Surfaces, Sew and other features to model the case:  
<img src="./Images/ASM_Case_LeftHand2.png">  


## 3D Printing the Case
See "ToleranceAndClearance.prt".  
The case is printed vertically. Notice the tear drop shaped M3 self-tapping pilot holes.  
<img src="./Images/ASM_Case_LeftHand3.PNG">  
<img src="./Images/3DPrintedCase0.jpg">  
Removing printing supports is currently very painful. Future versions will address this issue.  







Next step:
 1. ~~Play with Clojure, Leiningen, OpenSCAD. I am learning C++ and want to master it. I don't want to confuse myself with the language syntaxes before mastering C++.~~
 2. ~~get the 3D model in Fusion 360. Can't find one.~~
 3. ~~Ask a friend to do it. Friend left.~~
 4. ~~Setup a new desktop computer and learn FreeCAD. (FreeCAD 0.18 and 0.19 has been way too inconvenient/problematic/buggy for me to design with.)~~ 
 5. ~~Learn Catia (Too expensive and no torrent)~~
 6. ~~Design the keyboard case in Siemens NX12.~~
 7. ~~3D print the case.~~  
 8. ~~Iterate Case Design~~  
 9. EVK v1.2 completed and 3D printed.  
