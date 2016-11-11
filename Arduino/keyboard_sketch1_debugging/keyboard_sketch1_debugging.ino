#include <Mouse.h>
#include <Keyboard.h>


void setup() {
  Serial.begin(9600);
pinMode(2, INPUT_PULLUP);   // 'e'
pinMode(3, INPUT_PULLUP);   // 'r'
pinMode(4, INPUT_PULLUP);   // 'f'
pinMode(5, INPUT_PULLUP);   // 'v'
pinMode(6, INPUT_PULLUP);   // 'c'
pinMode(7, INPUT_PULLUP);   // 'x'
pinMode(8, INPUT_PULLUP);   // 's'
pinMode(9, INPUT_PULLUP);   // 'w'
pinMode(10, INPUT_PULLUP);   // 'Alt'
pinMode(11, INPUT_PULLUP);   // 'Shift'
pinMode(12, INPUT_PULLUP);   // 'MousePressed'
pinMode(13, INPUT_PULLUP);   // 'ON/OFF'
}

void loop() {


  Serial.println("HELLO WORLD");
Keyboard.begin();
  
if(digitalRead(13)==LOW){
  Serial.println("ON SWITCH IS ON");
if(digitalRead(2)==LOW){      //  'e' = Up Stich & UpRight SQUARE
Keyboard.write('e');
}

if(digitalRead(3)==LOW){      //  'r' = UpRight Stich & UpRight CROSS
Keyboard.write('r');
}

if(digitalRead(4)==LOW){      // 'f'  = Right Stitch & DownRight SQUARE
Keyboard.write('f');
}

if(digitalRead(5)==LOW){      //  'v' = DownRight Stitch & DownRight CROSS
Keyboard.write('v');
}

if(digitalRead(6)==LOW){      //  'c' = Down Stitch & DownLeft SQUARE
Keyboard.write('c');
}

if(digitalRead(7)==LOW){      //  'x' = DownLeft Stitch & DownLeft CROSS
Keyboard.write('x');
}

if(digitalRead(8)==LOW){      //  's' = Left Stitch & UpLeft SQUARE
Keyboard.write('s');
}

if(digitalRead(9)==LOW){      //  'w' = UpLeft Stitch & UpLeft CROSS
Keyboard.write('w');
}

if(digitalRead(10)==LOW){           // ALT  = DOUBLE STITCH
Keyboard.write('KEY_LEFT_ALT');
}

if(digitalRead(11)==LOW){           // SHIFT  = SHAPES
Keyboard.write('KEY_LEFT_SHIFT');
}

if(digitalRead(12)==LOW){           // MOUSE CLICK = CLEAR
Mouse.press();
}
} else {
Keyboard.end();
}

}
