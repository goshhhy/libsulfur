libsulfur
=====

The goal of libsulfur is to provide a library to enable the development of a user interface for unixlike systems that resembles the classic Macintosh user interface, specically that of System 7.

When referencing libsulfur by name, you should never capitalize it unless it is used at the beginning of a sentence.

Functions within libsulfur start with a capital S, the chemical symbol for sulfur, followed by the name of the interface within libsulfur. For example, all functions within Graf, the lower level drawing interface for sulfur, will begin with SGraf.


Interfaces
==========

### Graf

Graf is libsulfur's lower level drawing interface. It acts as a wrapper for libxcb, and can expose the xcb internals to the application if the developer desires. It provides basic drawing functionality, color support, and the ability to create windows to draw on.

### Evt

Evt is an event system for

### Msg

Msg is a messaging system built around Evt.

### Conf

### App