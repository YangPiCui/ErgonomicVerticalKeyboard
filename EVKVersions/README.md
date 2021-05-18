# Versions
To dos:  
Create embosses for keys so they can be better felt by the tip of the fingers.
Add QWERTY keymap   
Update Versioning  
  * Keyboard Layout Editor   
  * Github links  
  QMK Github  
CSDN博客 翻译中文  


## EVK_v0.1.4 (Under Development)  
Integrated Handrest  
* Draw the handplate surfaces altogether for a smoother finish  
* Increase keycapBaseModel stemClearance from 0.02mm to 0.03mm  
* Thicken switch mount wall from 1.5mm to 1.65mm  
* Enter key offset -x 2mm
* handSeparation 220->230
* thicknessTopPlate 2.7 -> 2.5mm
* Enlarge LED clearance holes
* thicknessText .6mm
* topPlate keySpacingX keySpacingY 19.5 -> 19 -> 19.5
* Reduce base keywell radius 80 -> 60
* midFingerColumn keySpacing 19.5 -> 19 -> 19.5
* knuckleRadiusXZPlane 400 -> 100 -> 170 -> 200
* knuckleRadiusYZPlane 420 -> 500
* angleIndexToMidXY 3 -> 0 -> 2 -> 3
* Bottom Rest Z -52 -> -51 -> -49
* Palm Rest x 40->30->28; y -65->-40; 
* Palm Rest upper radius 75->18

## [EVK_v0.1.3](EVK_v0.1.3)    
Glue-on palmrest
* Chamfer the keycap stems so they don't get caught on the switches  
* Thin the keycap walls slightly
* Reduce keywell radius from 87 to 80mm
* Pinkey finger's row separation 17->15.3; mid's 21->19.5.
* Move enter key away from space key slightly.
* Tilt control and windows keys slightly
* Redesign handgrip into a glue-on palm rest
* Tighten switch mount tolerance so the keys don't wiggle side to side
* Increase LED clearance hole diameter.
* Fix bug and thin walls from 1.8 to 1.5 
* Reduce Text Thickness  

## [EVK_v0.1.2](EVK_v0.1.2)

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

## [EVK_v0.1.1](EVK_v0.1.1)  
A minor upgrade to the previous version.  
* Increase row separation
* Flatten keywell slightly
* Enlarge keycaps and improve their fit
* Rotate thumbkeys  
* Enlarge the palm rest
* Fillet the palm grip

## [EVK_v0.1.0](EVK_v0.1.0)
I opted for a one-piece design with 90 keys. This simplifies the electronics, and uses all of the pins on the Teensy 2.0.  
* Improve layout and ergonomics  
* Deploy full-sized keycaps  

## [EVK_v0.0](EVK_v0.0) 
This is the first working prototype. It uses a split design. The firmware is based on the Dactyl Keyboard running on Teensy 2.0.  