# Versions  
To dos:  
Rebase Github Pull Request for the firmware


## [ECK_v0.2.0](ECK_v0.2.0) (FreeCAD)
People can't blind type.
Tilt keywell instead of making it vertical.
Rename ErgonomicVerticalKeyboard to ErgonomicComputerKeyboard


## [EVK_v0.1.2](EVK_v0.1.2) (Siemens NX license expired)
I redesigned the Handrest to let hands move more freely.
* Keys
  * Chamfer the keycap stems so they don't get caught on the switches  
  * Tighten switch mount tolerance so the keys don't wiggle side to side
  * Thin the keycap walls slightly
  * Move homekey's emboss forward by 1mm.
  * keycapBaseModel stemClearance 0.02->0.03->0.04
* Key Positioning
  * finger home row resting angle p411 47->48
  * base keywell radius 87 -> 80 -> 60 ->50
  * Row separation mid 21->19->19.2; pinky 17 -> 15.3; 
  * topPlate keySpacingX keySpacingY 19.5->19->19.5->19.2
  * dZIndexToMid 19.5 -> 19 -> 19.5
  * angleIndexToMidXY 3 -> 0 -> 2 -> 3
  * knuckleRadiusXZPlane 400 -> 100 -> 170 -> 200
  * knuckleRadiusYZPlane 420 -> 500
  * Switch mount wall and other walls' thickness 1.8 -> 1.5 -> 1.65
  * Fix thin walls
  * ASM_ThumbKeys DCS1 x:40->42
  * Spacekey distance to center of rotation 50->48
  * Enter key offset -x 2->3; y 1; z 20
  * Increase LED clearance hole diameter.
  * handSeparation 220->230
  * thicknessTopPlate 2.7 -> 2.5mm
* Handrest
  * Redesign handrest to be a separate glue-on.
  * Palm Rest x 40->30->23->29->28->26->27->29, y -65 -> -40, z -20 -> -10;  angle 8->9;  
  * Bottom Rest Z -52 -> -51 -> -49 -> -50 -> -45 -> -52 -> -50 -> -49; side extension 10 -> 15; front offset 6->13->10->8
* Miscellaneous
  * Enlarge LED clearance holes
  * thicknessText .6mm

## [EVK_v0.1.1](EVK_v0.1.1)
I removed the row steps to let fingers move more freely.
* Use normal keycaps for thumbkeys
* Reduce keycap height
* Reduce keycap support area. Keycaps can now be printed without supports.
* Clean up sketch in ASM_MASTER_MidFingeColumn.prt which brings keys slightly closer to the fingers
* Use 0.4mm nozzle and 0.3mm layer height. Adjusted tolerances accordingly.
* Lower switch mount height from 2.4 to 1.8mm
* Redesign key well to replace step-like rows with a semi circle instead. This resembles Kinesis Advantage. Keycaps no longer block finger movement.
* Scale index and ring finger row separation to that of the middle finger. Apply minimum row separation for the little finger row.
* Decrease colume angles
* Flatten colume to colume curvature slightly
* Thin side walls
* Thicken top plate
* Adjust Thumbgrip to better fit the palm
* Move enter key closer to space key
* Thicken screw mounting holes  
* Front plate thicken, not extrude  
* Adjust the angle and height of the hand rests  
* Enlarge the back of the hand rests  
* Print with a better 3D printer  

## [EVK_v0.1.0](EVK_v0.1.0)
I deployed a 90 key one-piece design. This simplifies the electronics, and uses all of Teensy 2.0's pins.   
* Deploy full-sized keycaps  
* Increase row separation
* Flatten keywell slightly
* Add QWERTY keymap   
Update Versioning  
  Keyboard Layout Editor   
  Github links  
  QMK Github  

## [EVK_v0.0](EVK_v0.0) 
This is the first working prototype. It uses a split design. The firmware is based on the Dactyl Keyboard running on Teensy 2.0.  