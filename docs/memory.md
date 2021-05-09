# Memory

## Pointer

1. The code can be compile in C-style cast:

``` C++
Document* documentPtr = getDocument();
char* myCharPtr = (char*)documentPtr;
```

2. The code can not compile in a static cast

```C++
Document* documentPtr = getDocument();
char* myCharPtr = static_cast<char*>(documentPtr); // BUG! Won't compile
```

3. Dynamic cast 

```
todo
```
