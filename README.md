A simple demo of using emscripten to simulate an arduion project. See [this blog post](thomashodson.com/2022/11/23/emscripten_arduino.html) for a full explanation.

To compile run
```bash
em++ -sASYNCIFY -O0 main.c -o build/main.js
```