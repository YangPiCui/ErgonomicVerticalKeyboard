# Keyboard Case
A 3D modelling software is required to design the case. I have tried many but only Siemens NX12 cut it. Do not ask me whether I bought it. Instead of answering that question, I will share with you, in addition to the .stl files and NX12 source files, the design process.  

"AnthropometricData" contains hand measurments.  
"PastVersions" cotains all past versions in compressed .rar format.  

## Siemens NX Modelling
I have modelled the case after my own hand, as my height of 1.7m is world's average. The keyboard parameters can be changed to accomodate bigger hands in Siemens NX12.  
Based on EVK version 1.2.  

### 0. Find the Natural Path (spline) Travelled by the Middle Finger.
Put a piece of paper on the table. Rest the left hand on the piece of paper and point the palm horizontally to the right. Use a pen to mark the path travelled by the middle finger onto the paper as one curls the finger. 
<img src="./Images/MidFingerPath0.jpg" width="500"> 
<img src="/Images/MidFingerPath1.jpg" width="500"> 
<img src="/Images/FingerTipPath0.png" width="500"> 
I used the middle finger because it's the longest finger. Other fingers should trace the same spline. 
Import the raster image into NX12 and sketch the spline. Then, tilt each key along the spline to further fit the finger actions. See "ASM_MASTER_MidFingeColumn.prt".  
<img src="/Images/ASM_MASTER_MidFingeColumn0.PNG" width="500">  

### 1. Mount the Key Switches
Create the key assembly and mount the keys in the same file.  
Connect the key mounts with NX12 Bridge Curve, Studio Surface, and the Sew Feature.  
<img src="/Images/ASM_MASTER_MidFingeColumn0.PNG" width="500">   

Create family parts for the other fingers, i.e. "ASM_SLAVE_LittleFingerColumn.prt".  
<img src="/Images/PartFamilies.PNG" width="500">  

### 2. Put Everything together
The Github folder "Images/MeasurementMethods/" constains photos illustrating how I tool my own anthropometric data.  
Create the thumb keys in "ASM_ThumbPlate.prt".  
Create "ASM_Case_LeftHand.prt" and trace out the knuckles with curves. Assemble each finger's key columns onto the trace curves.
Use NX12 Bridge Curves, Studio Surfaces, Sew and other features to model the case.









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
