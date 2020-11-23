# ElectronicsFirmwareAndSoftware

## 0. Shop Parts  
1. 94x Cherry Mechanical Switch （樱桃银轴）  
2. [1x Teensy 2.0 USB Board （开发板）](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.7d1f2e8depIv8w&id=537590679522&_u=b1t8kl8uaf14)  
3. Teensy header pins <- [单排针1*40双排排针2*40圆2.54mm间距](https://detail.tmall.com/item.htm?id=13700799942&spm=a1z09.2.0.0.7d1f2e8depIv8w&_u=b1t8kl8ud5aa)  
4. [100x 1N4148 （开关二极管）](https://detail.tmall.com/item.htm?id=15641176828&spm=a1z09.2.0.0.7d1f2e8depIv8w&_u=b1t8kl8u798e)  
5. 2x 2.2kΩ resistors (red, red, red) （电阻 ）  
6. 3x 3mm T1 LEDs （发光二极管）  
7. 3x 220 Ω resistors, or match to LED. (red, red, brown) （电阻）  
8. 30AWG sillicon wire （0.5mm 硅胶线）  

## 1. Build Custom QMK Firmware for the EVK
### 1.0 [Setup the QMK build environment](https://docs.qmk.fm/#/newbs_getting_started)  
During Windows setup, follow [this](https://stackoverflow.com/questions/41932407/which-python-should-i-install-and-how-when-using-msys2) and [this](https://stackoverflow.com/questions/48087004/installing-pip-on-msys) to install Python3 and pip on MSYS2.

### 1.1 Fork https://github.com/qmk/qmk_firmware on Github
[Keep the forked repository and the local copy up-to-date](https://www.earthdatascience.org/courses/intro-to-earth-data-science/git-github/github-collaboration/update-github-repositories-with-changes-by-others/)  
Local QMK Repository Path: C:\Users\<UserName>\qmk_firmware  
If giving "Error: C:/Users/<UserName>/qmk_firmware is too old or not set up correctly!", [run "python3 -m pip install pygments" in MSYS2](https://github.com/qmk/qmk_firmware/issues/10602).

### 1.2 Write Custom Codes
Understand the keyboard matrix ([reference](https://www.dribin.org/dave/keyboard/one_html/) | [reference](https://deskthority.net/wiki/Rollover,_blocking_and_ghosting)).  
[Understanding QMK’s Code](https://docs.qmk.fm/#/understanding_qmk?id=matrix-to-physical-layout-map)  
Copy /keyboards/handwired/dactyl_left into /keyboards/handwired/evk and [modify the files](https://docs.qmk.fm/#/hardware_keyboard_guidelines?id=custom-keyboard-programming)  
  
/handwired/evk/
* readme.md - update   
* info.json - update 

/handwired/evk/1_3/    
* readme.md - update    
* info.json - update    
* rules.mk - no change  
* 1_3.c - no change  
* config.h  
  * change matrix size from 6x6 to 6(rows) x 16(cols)  
  * define the matrix row and col pins for the [Teensy 2.0](https://www.pjrc.com/teensy/pinout.html)
```c
#define MATRIX_ROW_PINS \
    { B0, B1, B2, B3, B7, D0 }
#define MATRIX_COL_PINS \
    { D1, D2, D3, C6, C7, F0, F1, F4, F5, F6, F7, B6, B5, B4, D7, D6 }
```  
* 1_3_h    
  * [define the matrix to physical layout map](https://docs.qmk.fm/#/reference_configurator_support). ([the keymap variables can be whatever as long as they are unique](https://www.reddit.com/r/olkb/comments/42ohxz/crazy_columns_and_tons_of_keys_with_qmk/?utm_source=amp&utm_medium=&utm_content=post_body))
* [info.json](https://docs.qmk.fm/#/reference_configurator_support)
  * Build the [keymap](../Keymap) in the Keyboard Layout Editor
  * Convert its raw data into .json format with the [QMK KLE-JSON Converter](https://qmk.fm/converter/) 
  * Save the converted content to a info.json file

/handwired/evk/1_3/keymaps/default
* readme.md - update
* config.h - no change
* keymap.c 
  * In [QMK Configurator](https://config.qmk.fm/) [press Ctrl+Shift+I] (https://www.reddit.com/r/olkb/comments/aumb7i/how_do_you_manage_to_convert_keyboardlayoutjson/) to upload your info.json file to QMK Configurator to test the key display.
  * Or, look up the [default keycodes[(https://docs.qmk.fm/#/faq_keymap?id=what-are-the-default-keycodes) and [customize The Layout To Your Liking](https://docs.qmk.fm/#/newbs_building_firmware?id=customize-the-layout-to-your-liking).  


## 1. Wire up the Keyboard Matrix  
The QMK keyboard matrix for the EVK v1.3 in /handwired/evk/1_3/1_3.h   

```c
{ \
    { k0A, k0B, k0C, k0D, k0E, k0F,    k0G, k0H, k0I, k0J,    k0K, k0L, k0M, k0N, k0O, k0P }, \
    { k1A, k1B, k1C, k1D, k1E, k1F,    k1G, k1H, k1I, k1J,    k1K, k1L, k1M, k1N, k1O, k1P }, \
    { k2A, k2B, k2C, k2D, k2E, k2F,    k2G, k2H, k2I, k2J,    k2K, k2L, k2M, k2N, k2O, k2P }, \
    { k3A, k3B, k3C, k3D, k3E,  k3F,   k3G, k3H, k3I, k3J,   k3K,  k3L, k3M, k3N, k3O, k3P }, \
    { k4A, k4B, k4C, k4D,  k4E, k4F,   k4G, k4H, k4I, k4J,   k4K, k4L,  k4M, k4N, k4O, k4P }, \
    { XXX, XXX, k5B, k5C, XXX, XXX,   k5G, k5H, k5I, k5J,    XXX, XXX, XXX, k5M, k5N, XXX }, \
}

``` 

It looks like this physically:  
<img src="./Images/EVKv1.2_Keymapping.jpg"> 

### Rows
You don't have to decide how to connect the rows to the Teensy or MCP yet. Just worry about getting the matrix right.  
Row 5 is the thumb cluster, so just wire them together and imagine they're in a row instead of it being more like a circle.  
For the right hand part:  
<img src="./Images/RightHandRowWiring.jpg"> 

### Columns
The diodes need the black bar facing away from the key.  
For the right hand part:  
<img src="./Images/RightHandMatrix.jpg"> 

Both parts:  
<img src="./Images/BothHandMatrices.jpg"> 


## 2. Wiring up the electronics
<img src="./Images/dactyl-circuit-diagram.png">  
 
<img src="./Images/FullWiring.jpg"> 





## 3. QMK Firmware & Custom Keymap 



### QMK
Use the [QMK Corfigurator](https://docs.qmk.fm/#/newbs_building_firmware_configurator) to load the Ergodox_EZ keymap, modify it and generate the .hex file:  



### Flashing
Use the [Teensy Loader App](https://www.pjrc.com/teensy/loader.html) to flash the generated .hex file onto the Teensy 2.0 micro controller.  

###### [ODC Open Database License v1.0](https://choosealicense.com/appendix/)  (free but no patent or commercial use)