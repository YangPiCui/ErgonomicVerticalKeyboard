# Ergonomic Vertical Keyboard (EVK)
![](LatestDesigned.JPG)
![](LatestManufactured.jpg)

## Introduction
Do you get a sore neck and stiff fingers from typing? Have you developed a stretched forth neck and a hump back?  
The keyboard and the mouse are the culprits. They force our hands to lay flat on the desk pronated. This in turn stresses our neck.  
Now put your hands on the desk but rotate your palms to face each other. Do you start to feel your shoulders relaxed, your neck relieved, and your back straightened?    

The Ergonomic Vertical Keyboard (EVK) lets you do exactly that, and it also includes additional ergonomic features.
- The case orientates the key caps into a vertical formation, so that palms face each other while typing. [[SafeType](https://safetype.com/index.php?id_product=1&controller=product) | [ergodox ez vertical stand](https://www.thingiverse.com/thing:2748084)&nbsp;| [Ergodox EZ tent kit](https://www.thingiverse.com/thing:1433117) | [A Similiar Idea](https://thomasbaart.nl/2019/01/20/vertikeeb-making-a-vertical-keyboard-part-1/)]
- Concave design for more natural finger movements. [[Kinesis Advantage 2](https://kinesis-ergo.com/shop/advantage2/)  | [British patent 1,016,993](https://geekhack.org/index.php?topic=63415)]  
- Little fingers' extra columns have been reassigned to the index fingers for eliminating sore pinkies.
- Compact design to save desk space for other computer peripherals.


## Versions
### EVK_v1.31
* Increase row separation
* Flatten keywell
* Enlarge keycaps and improve their fit
* Rotate thumbkeys 

### [EVK_v1.3](EVK_v1.3)
* Add palm grip and thumb rest   
* Add more keys  
* Improve layout and ergonomics  
* Deploy full-sized keycaps  

### [EVK_v1.2](EVK_v1.2) 
Based on the Dactyl Keyboard with Teensy 2.0. 


## Algorithmic Keymap Optimization (Under Development - can use some help)
The layout should accommodate world's languages according to their usage.

### 1. Preparation
[The Carpalx Layout - simulated annealing](http://mkweb.bcgsc.ca/carpalx/?simulated_annealing) | [white_keyboard_layout](https://github.com/mw8/white_keyboard_layout) | [ThinQu Layout](https://microexploitation.com/2018/06/04/thinqu/)  

Download sample word data. [World's Language Usage](https://www.vistawide.com/languages/top_30_languages.htm)
[English Letter Frequencies](https://norvig.com/mayzner.html)
[Chinese Letter Frequencies](http://xahlee.info/kbd/chinese_pinyin_letter_frequency.html)
Weight the frequencies with the ratio of total number of speakers of each language.
[Top 30 languages of the world](https://www.vistawide.com/languages/top_30_languages.htm)

Get symbol frequencies for 'spaces', 'enter', 'comma'... from literature and from codes in (C++, Python, etc.). 
[http://xahlee.info/comp/computer_language_char_distribution.html](http://xahlee.info/comp/computer_language_char_distribution.html)

### 2. Scoring Logic:
Each finger's usage should be proportional to its strength, the cube of its diameter.  
Diameter of my left index finder (LI): 56mm / LM: 54mm / LR: 53mm / LP: 47mm
So the ratio of finger key presses should be 1.69 : 1.52 : 1.43 : 1.

how comfortably one presses simple operations such as 'ctrl + c' needs to be taken into account.

If a hand changes row, the other hand types two charactors.  
Change two rows with two different finger better than change two rows with the same finger.

switch 1 or 2 rows needs the other hand to type two letters to be optimal. Switching 3 rows requires the other hand to strike 3 times.

make the right index and mid fingers type slightly less, as most people use these two fingers to click the mouse.

### 3. Implementation
class Key
{
private:
	
}

finger class

Next step:
1. ~~Break down the problem into smaller parts for C++.~~
2. Figure out how to do simulated annealling. 

## Resources
[Main Reddit Thread](https://www.reddit.com/r/ErgoMechKeyboards/comments/g28c2i/ergonomicverticalkeyboard_thread/) | [Old](https://www.reddit.com/r/ErgoMechKeyboards/comments/fvxuw1/need_help_combining_all_of_the_good_features_from/) | [Older](https://www.reddit.com/r/MechanicalKeyboards/comments/fumlvb/possible_to_absorb_and_combine_all_of_the_good/)  

[reddit.com/r/MechanicalKeyboards/](http://reddit.com/r/MechanicalKeyboards/)&nbsp;|&nbsp;[https://www.reddit.com/r/ErgoMechKeyboards/](https://www.reddit.com/r/ErgoMechKeyboards/)  
[https://geekhack.org/](https://geekhack.org/)  
[Xah Keyboard Guide](http://Xah%20Keyboard%20Guide)  
[Reddit Post 0](https://www.reddit.com/r/MechanicalKeyboards/comments/fumlvb/possible_to_absorb_and_combine_all_of_the_good/) | [Reddit Post 1](https://www.reddit.com/r/ErgoMechKeyboards/comments/fvxuw1/need_help_combining_all_of_the_good_features_from/) | [Main Reddit Thread ](https://www.reddit.com/r/ErgoMechKeyboards/comments/g28c2i/ergonomicverticalkeyboard_thread/)  

[Ergodox](https://www.ergodox.io/)  
[Dactyl Keyboard Wiring](https://github.com/adereth/dactyl-keyboard/blob/master/guide/README.org#wiring)   
[Ergo-Dox keyboard assembly](https://www.youtube.com/watch?v=x1irVrAl3Ts)  
[Keyboard PCB Guide](https://github.com/ruiqimao/keyboard-pcb-guide)   
[GMK Carbon Original Ergodox build log](https://imgur.com/a/3riAB)  
[Dactyl Manuform Mini DIY Ergonomic Mechanical Keyboard Build Log](https://www.beekeeb.com/dactyl-manuform-mini-mechanical-keyboard-build-log/)   
[Detailed guide to making a custom keyboard](https://www.reddit.com/r/MechanicalKeyboards/comments/4l0p41/guide_detailed_guide_to_making_a_custom_keyboard/?utm_source=amp&utm_medium=&utm_content=post_body)  
[Building your own keyboard (from scratch)](https://medium.com/@monkeytypewritr/building-your-own-keyboard-from-scratch-bd0638c40850)  

[Windows 10 Key Mapping software](https://thegeekpage.com/top-10-best-free-key-mapping-software-for-windows-10/)&nbsp;| [SharpKeys](https://github.com/randyrants/sharpkeys/releases)



###### [ODC Open Database License v1.0](https://choosealicense.com/appendix/)  (free but no patent or commercial use)
