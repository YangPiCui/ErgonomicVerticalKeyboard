# Versions 
Add QWERTY keymap   
Update Versioning  
  * Keyboard Layout Editor   
  * Github links  
  QMK Github  
CSDN博客 翻译中文  

## [EVK_v0.1.2](EVK_v0.1.2) (Under Development)  
I redesigned the Handrest to let hands move more freely.
* Redesign handrest so I can glue it on before integrating it.
Reduce keystem diameter so they won't be caught by the switches.
* Chamfer the keycap stems so they don't get caught on the switches  
* Tighten switch mount tolerance so the keys don't wiggle side to side
* Thin the keycap walls slightly
Create embosses for keys so they can be better felt by the tip of the fingers.
* Draw the handplate surfaces altogether for a smoother finish  
Fix thin walls
* Pinkey finger's row separation 17 -> 15.3; mid's 21 -> 19.5.
* Increase keycapBaseModel stemClearance from 0.02mm to 0.03mm  
* Switch mount wall and other walls' thickness 1.8 -> 1.5 -> 1.65
* Tilt control and windows keys slightly
* Increase LED clearance hole diameter.
* Enter key offset -x 2mm
Move the Enter key closer to the space key.
* handSeparation 220->230
* thicknessTopPlate 2.7 -> 2.5mm
* Enlarge LED clearance holes
* thicknessText .6mm
* topPlate keySpacingX keySpacingY 19.5 -> 19 -> 19.5
* base keywell radius 87 -> 80 -> 60
* midFingerColumn keySpacing 19.5 -> 19 -> 19.5
* knuckleRadiusXZPlane 400 -> 100 -> 170 -> 200
* knuckleRadiusYZPlane 420 -> 500
* angleIndexToMidXY 3 -> 0 -> 2 -> 3

* Palm Rest x 40->30->28->23->29->28->26, y -65 -> -40, z -20 -> -10;  angle 8->9;  
move palm rest x 2 mm out
* Bottom Rest Z -52 -> -51 -> -49 -> -50 -> -45 -> -52 -> -50 -> -49; side extension 10 -> 15; front offset 6->13->10->8
Make Handrest 3D print adjustable

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

## [EVK_v0.0](EVK_v0.0) 
This is the first working prototype. It uses a split design. The firmware is based on the Dactyl Keyboard running on Teensy 2.0.  