# Computer Game 5

## Disclaimer

Ich werde meine Lösung Schritt-für-Schritt live programmieren.  
Deswegen müsst ihr diese nicht selber lösen, ihr könnt es aber gerne probieren.

## Exercise 1

Wir werden jetzt ein 2D-Spielfeld verwenden:

```cpp
struct Coordinate
{
    std::uint32_t x;
    std::uint32_t y;
};
```

Die Funktionen müssen dementsprechend angepasst werden.
Das Spielfeld würde dann so aussehen:

![alt](./../../UdemyCpp/media/Game5_1.png)

Das heißt das Spielfeld ist 5x5 groß.  
Der Spieler startet oben links.  
Das Ziel ist unten rechts.
