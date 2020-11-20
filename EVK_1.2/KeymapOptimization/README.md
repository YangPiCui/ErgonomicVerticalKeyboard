# Keymap Optimization

Optimize ergonomics and comfort before typing  speed and finger travels.  
The layout should accommodate world's languages according to their usage.  
## Manual Optimization
[English Letter Frequency](https://norvig.com/mayzner.html)
[Keyboard Layout Editor](http://keyboard-tool.pimpmykeyboard.com/##@_name=vertical/_keyboard/_v1.0&author=Yang%20Cui&notes=The%20%22symbol%20key%22%20accesses%20the%20symbols%20marked%20at%20the%20top%20left%20cornors%20on%20the%20keycaps.%0AThe%20%22Modifcn.%20Key%20Lock%22%20locks%20the%20modification%20keys%20%22Symbol%22%20and%20%22Shift%22.;&@_x:2;&=F3%0A%0A%E2%86%91%0A3&_x:12&a:0;&=F8%0A%0A%E2%86%92%0A8%0A-;&@_y:-0.875&x:1&a:4;&=F2%0A%0A%0A2&_x:1;&=F4%0A%0A%E2%86%93%0A4&_x:10&a:0;&=F7%0A%0A%E2%86%90%0A7%0A+&_x:1;&=F9%0A%0A%0A9%0A*;&@_y:-0.875&x:4&a:4;&=F5%0A%0A%0A5&_f:2;&=F11%0A%0A%0APrintScrn&_x:6&f:3;&=F12%0A%0A%0Anum&=F6%0A%0A%0A6;&@_y:-0.875;&=F1%0A%0A%0A1&_x:16&a:0;&=F10%0A%0A%0A0%0A//;&@_y:-0.375&x:2&a:4;&=$%0A%0AR%0Ar&_x:12&a:0;&=%7D%0A%0AO%0Ao%0A8;&@_y:-0.875&x:1&a:4;&=*%0A%0AH%0Ah&_x:1;&=%5B%0A%0AF%0Af&_x:10&a:0;&=%7B%0A%0AY%0Ay%0A7&_x:1;&=+%0A%0AU%0Au%0A9;&@_y:-0.875&x:4&a:4;&=%5D%0A%0AX%0Ax&_a:7;&=&_x:6;&=Back%20Space&_f:1;&=;&@_y:-0.875&a:4&f:3;&=%7C%0A%0AQ%0Aq&_x:16&a:0;&=%5E%0A%0AJ%0Aj%0A0;&@_y:-0.375&x:2&c=#2fa342&a:4;&=%22%0A%0AN%0An&_x:12&a:0;&=/:%0A%0AA%0Aa%0A5;&@_y:-0.875&x:1&a:4;&=//%0A%0AS%0As&_x:1;&=%27%0A%0AT%0At&_x:10&a:0;&=/_%0A%0AI%0Ai%0A4&_x:1;&=-%0A%0AE%0Ae%0A6;&@_y:-0.875&x:4&c=#cccccc&a:4;&=/=%0A%0AD%0Ad&_a:7;&=Tab&_x:6;&=&_a:4;&=/&%0A%0AP%0Ap;&@_y:-0.875&c=#2fa342;&=~%0A%0AL%0Al&_x:16&a:0;&=%25%0A%0AK%0Ak%0AEnter;&@_y:-0.375&x:2&c=#cccccc&a:4;&=/@%0A%0AC%0Ac&_x:12&a:0;&=%29%0A%0A/;%0A,%0A2;&@_y:-0.875&x:1&a:4;&=#%0A%0AM%0Am&_x:1;&=%3C%0A%0AB%0Ab&_x:10&a:0;&=%28%0A%0AG%0Ag%0A1&_x:1;&=!%0A%0A?%0A.%0A3;&@_y:-0.875&x:4&a:4;&=%3E%0A%0AV%0Av&_x:8;&=%5C%0A%0AW%0Aw;&@_y:-0.875;&=%60%0A%0AZ%0Az&_x:16&a:3;&=Del%0A%0A%0A%0ADel;&@_y:-0.375&x:2&a:7;&=Shift&_x:12;&=Shift;&@_y:-0.875&x:1&f:2;&=Symbol&_x:1&f:3;&=Alt&_x:10;&=Alt&_x:1&f:2;&=Symbol;&@_y:-0.75&f:3;&=End&_x:16&a:5&f:2;&=Modifcn%0ALock%0A%0A%0A%0A%0AKey;&@_r:30&rx:6.5&ry:4.25&x:-0.25&a:7&f:3;&=Ctrl&_a:4;&=Mac%0A%0A%0AWin;&@_x:-1.25&a:7&h:2;&=Space&_a:4&f:1&h:2;&=ESC%0A%0A%0AEnter&_f:3;&=%0A%0A%0AHome;&@_x:0.75;&=%0A%0A%0AEnd;&@_r:-30&rx:13&y:-0.75&x:-3;&=%0A%0A%0APrint%20Scr&_a:7;&=Ctrl;&@_x:-3&a:4;&=%0A%0A%0APg%20Up&_f:1&h:2;&=ESC%0A%0A%0AEnter&_h:2;&=%0A0%0A%0ASpace;&@_x:-3&f:3;&=%0A%0A%0APg%20Down)  
[Keyboard Layout Analyzer](http://patorjk.com/keyboard-layout-analyzer/#/load/hqrGn4NG)  

## Algorithmic Optimization - In Progress  

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

###### [ODC Open Database License v1.0](https://choosealicense.com/appendix/)  (free but no patent or commercial use)