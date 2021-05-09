- [VS Code](#vs-code)
  - [Memory Dump](#memory-dump)

# VS Code

## Memory Dump

**Format:**

```
x/nfu addr
x addr
x
```

|     | meaning                             |
| --- | ----------------------------------- |
| x   | Use the x command to examine memory |
| n   | the repeat count                    |
| f   | the display format same as print    |
|     | d: decimal                          |
|     | x: hexadecimal (default)            |
| u   | the unit size                       |
|     | b: Byte                             |
|     | h: Half words(two bytes)            |
|     | w: Words (four bytes)               |
|     | g: Giant words (eight bytes)        |

**Dump by address**

```

-exec x/64x 0x74ae70

```

**Dump by variable name**

```

-exec x/64x variable

```

```

```
