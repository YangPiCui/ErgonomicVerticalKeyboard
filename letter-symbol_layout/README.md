
# Design Letter and Symbol Layout
## 1. Physiology
Fingers' total usage should be proportional to their strengths, which is proportional to the cube of their diameters.

Diameter of my left index finder (LI): 56mm

LM: 54mm

LR: 53mm

LP: 47mm

So the ratio of finger key presses should be 1.69 : 1.52 : 1.43 : 1.

### Finger usage comes frome:
1. Clicking the mouse - current keyboard layout design ignore the usage of mouse. This creates over-usage of the index and middle fingers for programmers who game.
2. Typing letters.
3. Typing symbols.
4. Typing modification keys such as 'shift' and 'enter'.

## 2. Gather Frequency Data

### Mouse
Assume most people are right handed mouse users. Their right index and right middle fingers are used.

### Letters
The same multiple languages: English, Chinese, German and French (the common characters)
[English Letter Frequencies](https://norvig.com/mayzner.html)
[Chinese Letter Frequencies](http://xahlee.info/kbd/chinese_pinyin_letter_frequency.html)
Weight the frequencies with the ratio of total number of speakers of each language.
[Top 30 languages of the world](https://www.vistawide.com/languages/top_30_languages.htm)

Scoring system:
1. switch 1 or 2 rows needs the other hand to type two letters to be optimal. Switching 3 rows requires the other hand to strike 3 times.

### Symbols
Get symbol frequencies for 'spaces', 'enter', 'comma'... from literature and from codes in (C++, Python, etc.). 
[http://xahlee.info/comp/computer_language_char_distribution.html](http://xahlee.info/comp/computer_language_char_distribution.html)

### Modification Keys

how comfortably one presses simple operations such as 'ctrl + c' needs to be taken into account.

## 3. [Tentative Layout](keyboard-tool.pimpmykeyboard.com/##@@_x:3.5%3B&=%23%0A3&_x:10.5%3B&=*%0A8%3B&@_y:-0.875&x:2.5%3B&=%2F@%0A2&_x:1%3B&=$%0A4&_x:8.5%3B&=%2F&%0A7&_x:1%3B&=(%0A9%3B&@_y:-0.875&x:5.5%3B&=%25%0A5&_a:7%3B&=&_x:5.5&a:4%3B&=%5E%0A6%3B&@_y:-0.875&x:1.5%3B&=!%0A1&_x:14.5%3B&=)%0A0%3B&@_y:-0.375&x:3.5%3B&=E&_x:10.5%3B&=I%3B&@_y:-0.875&x:2.5%3B&=W&_x:1%3B&=R&_x:8.5%3B&=U&_x:1%3B&=O%3B&@_y:-0.875&x:5.5%3B&=T&_x:6.5%3B&=Y%3B&@_y:-0.875&x:1.5%3B&=Q&_x:14.5%3B&=P%3B&@_y:-0.375&x:3.5%3B&=D&_x:10.5%3B&=K%3B&@_y:-0.875&x:2.5%3B&=S&_x:1%3B&=F&_x:8.5%3B&=J&_x:1%3B&=L%3B&@_y:-0.875&x:5.5%3B&=G&_x:6.5%3B&=H%3B&@_y:-0.875&x:1.5%3B&=A&_x:14.5%3B&=%2F:%0A%2F%3B&_a:7&w:1.5%3B&=%3B&@_y:-0.375&x:3.5&a:4%3B&=C&_x:10.5%3B&=<%0A,%3B&@_y:-0.875&x:2.5%3B&=X&_x:1%3B&=V&_x:8.5%3B&=M&_x:1%3B&=>%0A.%3B&@_y:-0.875&x:5.5%3B&=B&_x:6.5%3B&=N%3B&@_y:-0.875&x:1.5%3B&=Z&_x:14.5%3B&=%3F%0A%2F%2F&_a:7&w:1.5%3B&=%3B&@_y:-0.375&x:3.5%3B&=&_x:10.5%3B&=%3B&@_y:-0.875&x:2.5%3B&=&_x:1%3B&=&_x:8.5%3B&=&_x:1%3B&=%3B&@_y:-0.875&x:1.5%3B&=%3B&@_y:-0.875&x:17%3B&=&=%3B&@_r:30&rx:6.5&ry:4.25&x:1&h:2%3B&=&=%3B&@_x:2%3B&=%3B&@_y:-0.75&x:0.5&h:2%3B&=%3B&@_r:-30&rx:13&y:-1&x:-3%3B&=&=%3B&@_x:-3%3B&=&_h:2%3B&=&_h:2%3B&=%3B&@_x:-3%3B&=)



## 4. Software modelling
