# Labyrinth

A procedural labyrinth game written in one terminal page (80&times;24) of space
for code

![Labyrinth](http://i.imgur.com/Tgwfk3W.png)

## Why?

Because why not? Kidding aside, the game came to existence as part of a quick
challenge on the [TIGSource](http://www.tigsource.com) forums. The goal was to
create a complete game in one terminal page of space; that would be 1920
bytes (characters) of code including all those newlines.

## Compiling

Labyrinth uses [SDL](http://www.libsdl.org/) as its backbone. In order to
compile `labyrinth.c`, you will be needing
[SDL 1.2.*](http://www.libsdl.org/download-1.2.php). Once you have it installed
and in place, simply do:

```bash
cc labyrinth.c `sdl-config --cflags --libs -o labyrinth`
```

The compiler might bug you with a warning regarding `time()`, that is to be
expected. Due to the amount of code space available the header file containing
a prototype for `time()` was not included.

This was all for compiling on *nix; as for compiling on Windows&hellip; I
honestly have no idea. Though, it should work out of the box, just fine.

## The objective

Your ultimate objective is to unite the black square with the blue square. You
do this by moving the black square through dragging and dropping using your
mouse.

You have 20 seconds for each level to achieve this objective. If, for
whatever reason, you fail to unite these little chaps, the game will simply
quit abruptly.

## License

Considering it's a very simple game with an obfuscated C code, there shouldn't
be any valid reason to license it with anything other than the
[WTFPL](http://www.wtfpl.net)&hellip;

> Everyone is permitted to copy and distribute verbatim or modified copies of
> this license agreement, and changing it is allowed as long as the name is
> changed.

In other words:

> You just __do what the fuck you want to__.

## Contributors

Here's the name of the sole contributor of the project. It's not like anyone
else will ever contribute but formalities are formalities.

* Goksel Goktas (author)
