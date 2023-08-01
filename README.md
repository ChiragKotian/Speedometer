# Speedometer for cycles

Riding a cycle is fun but can get boring sometimes, so to tackle that, I put up a rechargeable speedometer on it which with small tweaks in code can display distance travelled by cycle too.

## Engineering description:

The whole system is built upon Arduino nano encased by a custom 3D printed enclosure.

This system uses magnets and hall sensors to count the number of revolutions taken by cycle in unit time to calculate moving average speed of the cycle.

The speed thus calculated is displayed on the OLED screen attached to the enclosure.

A magnet is attached to the wheel spokes, also, 2 hall sensors are attached to the either sides of the bicycle fork. The reason why two hall sensor are used is because if incase the user stops the cycle exactly 
when magnet coincides with the hall sensor or moves the cycle such that magnet passes the hall sensor again and again, Arduino will count it as one revolution of wheels
and give ridiculuos speed values. This system also helps in determining the reverse speed as by using the sequence of activation of sensors we can calculate the direction of motion
of movement of cycle.

The entire system is powered by two Li-ion batteries which are in series while using the speedometer and while charging it, charge parallelly using TP4056 Li-ion charging boards.

The system is also equiped with voltage moniter so that user charges the batteries when low.

## Some Videos and Photos:

## Credits:
_This project was solely made by [me](https://chiragkotian.github.io) as a side project._
