# 4x12
![boardsource 4x12](https://i.imgur.com/rVtAEq5.jpg)

* Keyboard Maintainer: [Boardsource](https://github.com/daysgobye) 
* Hardware Supported: 4x12 v1
* Hardware Availability: this keyboard is available from the [Boardsource store](https://boardsource.xyz/store/5ecb7dad86879c9a0c22db32)

Make example for this keyboard (after setting up your build environment):

    make boardsource/4x12:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

# 2024.03.28(Thursday);18h06 #

I do not remember how to compile the qmk keymap but I will put it here once I
know it again. 

## 2024.03.28(Thursday);19h28 ##

So, I need to be placed in the keyboard directory, for example, for my equals
48, I need to go to the folder 

```
~/Develpment/qmk_firmware/keyboards/boardsource/4x12_equals_blok/
```

and then choose the desired keymap. The last one that is running now in my keeb
is on the `/aero` directory. Make sure that the keymap name is `keymap.c`,
otherwise it will not run. I had the name `keymap_aero.c` and it was giving me
errors when trying to compile. 

To **compile** we need to be placed in the keymap directory and the run: 

```
qmk compile -km aero -e CONVERT_TO=blok
```
where, `-km` corresponds to the keymap selection, in this case the `aero`
folder, and `-e` set a variable to be passed to the make function. Here we are
passing `CONVERT_TO=blok` because I am using the blok controller by boardsource.

After compiling without errors, the `compiled.uf2` file will be place in the
home `qmk_firmware` folder. To flash it to the keeb, you need to press twice the
reset button under the controller; it will appear as an flash memory with the
name `rm-...` *something like that* and the you need to drag the `file.uf2` file
to the device. The device will reboot automatically and be ready to use.   

