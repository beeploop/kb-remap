# Xmodmap keyboard remap

Linux keyboard remap with xmodmap

## Run
```bash
xmodmap xmod-remap
```

## Make an executable runner
- Using Make
```bash 
Make build
```

```bash 
./remapper
```

- Using gcc
```bash
gcc -o remapper remapper.c
```

```bash
./remapper
```

## Optional
Create a symlink to bin directory to execute the remapper anytime
