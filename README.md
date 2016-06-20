# CompareShortCondition

[![Build Status](https://travis-ci.org/ReenExeCubeTime/CompareShortCondition.svg)](https://travis-ci.org/ReenExeCubeTime/CompareShortCondition)

##### What fast?
```c
if (some) {
  return 'a'
} else if (other) {
  return 'b'
} else {
  return 'c'
}
```

or same
```c
if (some) {
  return 'a'
}

if (other) {
  return 'b'
}

return 'c'
```

### Travis build output:
```bash
    Simple get 0.289999992
    Condition getIf 0.409999996
    Condition getIfElse 0.410000026
```

### My terminal output:
```bash
    Simple get 0.233629003
    Condition getIf 0.292778015
    Condition getIfElse 0.320569992
```

### Conclusions:
##### Compiler optimize it - so time almost same - see [Travis](https://travis-ci.org/ReenExeCubeTime/CompareShortCondition) build