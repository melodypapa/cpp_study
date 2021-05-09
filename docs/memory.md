- [Memory](#memory)
  - [Type Cast](#type-cast)
  - [Smart Pointers](#smart-pointers)
    - [Potential Errors](#potential-errors)
    - [Unique ownership semantics](#unique-ownership-semantics)
      - [Create unique_ptr](#create-unique_ptr)
      - [Access the data which unique_ptr points to](#access-the-data-which-unique_ptr-points-to)
      - [get() method](#get-method)
      - [reset() method](#reset-method)
      - [release() method](#release-method)
      - [std::move() utility](#stdmove-utility)
      - [unique_ptr and C-Style Arrays](#unique_ptr-and-c-style-arrays)
    - [Shared ownership semantics](#shared-ownership-semantics)
      - [Create shared_ptr](#create-shared_ptr)
      - [get() method](#get-method-1)
      - [reset() method](#reset-method-1)
      - [release() method](#release-method-1)
# Memory

## Type Cast

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

## Smart Pointers

Standard smart pointers are defined in the \<memory\> header file.

The default smart pointer shall be *unique_ptr*. Only use *shared_ptr* when you rally need to share the resource.

### Potential Errors
1. Free dynamically allocated memory more than one and cause **memory corruption** or  a fatal run-time error.
2. Forget to free dynamic allocated memory cause **memory leak**.

### Unique ownership semantics

The Standard Library provides *std::unique_ptr* to achieve the **unique ownership** semantics.

#### Create unique_ptr

If the go() method throws an exception the call to delete is never executed, causing a memory leak.

``` C++
void couldBeLeaky(){
    Simple * mySimplePtr = new Simple();
    mySimplePtr->go();
    delete mySimplePtr;
}
```

To solve this error, you shall use a *unique_ptr*. 

``` C++
void notLeaky(){
    auto mySimpleSmartPtr = make_unique<Simple>();
    mySimpleSmartPtr->go();
}
```

The function *make_unique()* is introduced in C++ 14. If the compiler does not support *make_unique()*, the follow code can do same thing.

``` C++
unique_ptr<Simple> mySimpleSmartPtr(new Simple())
```

Always use *make_unique* to create a *unique_ptr*.

#### Access the data which unique_ptr points to

Smart pointer can still be dereferenced (using * or ->) just as standard pointer.

``` C++
mySimpleSmartPtr->go();
```
Or
``` C++
(*mySimpleSmartPtr).go()
```

#### get() method

The *get()* method can be used to access the underlying pointer.

``` C++
void processData(Simple* simple) {/*...*/}

auto mySimpleSmartPtr = make_unique<Simple>();
processData(mySimpleSmartPtr.get());
...
```

#### reset() method

free the underlying pointer of a *unique_ptr*

```C++
mySimpleSmartPtr.reset()             // Free resource and set to nullptr
mySimpleSmartPtr.reset(new Simple()) // Free resource and set to a new Simple instance 
```

#### release() method

disconnect the underlying pointer form *unique_ptr* with **release()**. The **release()** method returns the underlying pointer to the resource and then sets the smart pointer to *nullptr*.

```C++
Simple * simple = mySimpleSmartPtr.release(); // Release ownership
delete simple;
simple = nullptr;
```

#### std::move() utility

Because a *unique_ptr* represents unique ownership, it cannot be *copied*. Using the std::move() utility to move one unique_ptr to another one.

#### unique_ptr and C-Style Arrays

To create a C-Style array of ten integers:

```C++
auto myVariableSizedArray = make_unique<int[]>(10)
```


### Shared ownership semantics

The Standard Library provides *std::share_ptr" with reference counting to achieve **shared ownership** semantics.

#### Create shared_ptr

The underlying resource is only freed when the last *shared_ptr* is destroyed or reset.

A *shared_ptr* also supports the **get()** and **reset()** methods. But **

```C++
auto mySimpleSmartPtr = make_shared<Simple>();
```

#### get() method

It is same as *unique_ptr*.

#### reset() method

It is similar as *unique_ptr*. The only difference is that when calling reset(), due to reference counting.

#### release() method

It does not support release()

#### use_count() method

The *user_count()* method is to retrieve the number of *shared_ptr* instances.


