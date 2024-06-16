export const keymap = {
  title: "Phalanx",
  layers: [
    {
      title: "alpha",
      description: `<p>
        The alpha layer's key arrangement is based on the
        <a href="https://engram.dev">Engram</a>
        layout. The home row keys on both hands utilize
        <a href="https://docs.qmk.fm/#/mod_tap">Mod-Tap</a>
        for access to <kbd>Shift</kbd>, <kbd>Ctrl</kbd>, <kbd>Alt</kbd> and
        <kbd>Super</kbd>. The <kbd>Hypr</kbd> and <kbd>Meh</kbd> modifiers are
        also available as holds on the top row. The outer left thumb is
        <kbd>Space</kbd> when tapped and provides access to the number layer
        when held. The inner left thumb switches to the symbol layer for a
        single keypress when tapped or accesses the navigation layer while held.
        The outer right thumb is <kbd>Backspace</kbd> when tapped and provides
        access to the number layer when held. The inner right thumb is a sticky
        <kbd>Shift</kbd> when tapped or accesses the system layer while held.
        Quickly double-tapping the inner right thumb sends a <kbd>Period</kbd>,
        <kbd>Space</kbd> and a sticky <kbd>Shift</kbd> (sentence case). Pressing
        both of home row <kbd>Shift</kbd> keys enables caps word.
        </p>
        <h2>Combos</h2>
        <p>
        The base (alpha) layer has combos for recording and replaying macros.
        Two macros can be utilized and store up to 128 keypresses total. The
        record macro combos are used for both starting and stopping recording.
        There is also a combo for locking the navigation layer, which is useful
        for mouse emulation (aka browsing while eating mode).
        </p>`,
      keys: [
        "byou   ldwv",
        "ciea   htsn",
        "gxjk   rmfp",
        [" ", " ", " ", "sym", "␣", " ", "⌫", "shift"],
      ],
      holds: [
        ["hypr", "meh", " ", " ", " ", " ", " ", " ", " ", "meh", "hypr"],
        ["super", "alt", "ctrl", "shift", " ", " ", " ", "shift", "ctrl", "alt", "super"],
        "           ",
        [" ", " ", " ", "nav", "num", " ", "num", "sys", " ", " ", " "],
      ],
      combos: {
        "rec macro 1": [
          "0011   0000",
          "0000   0000",
          "0000   0000",
          "   00 00   ",
        ],
        "play macro 1": [
          "0000   0000",
          "0000   0000",
          "0011   0000",
          "   00 00   ",
        ],
        "rec macro 2": [
          "0000   1100",
          "0000   0000",
          "0000   0000",
          "   00 00   ",
        ],
        "play macro 2": [
          "0000   0000",
          "0000   0000",
          "0000   1100",
          "   00 00   ",
        ],
        "lock nav": [
          "0000   1110",
          "0000   0000",
          "0000   0000",
          "   00 00   ",
        ],
      }
    },
    {
      title: "number",
      description: `<p>
        Those with a keen eye may have noticed that there are only 24 letters on
        the alpha layer. The <kbd>q</kbd> and <kbd>z</kbd> are located on the
        left hand side of the number layer along with the symbols. Also on the
        left half, the <kbd>Esc</kbd> key is on the home row pinkie. The numbers
        are on the right half along with the square brackets. While holding down
        the left thumb (number layer), the right thumb's keys become a
        <kbd>Tab</kbd> (outer thumb) and a <kbd>Return</kbd> (inner thumb).
        While holding down the right thumb, the left thumb's keys become a
        <kbd>Repeat</kbd> (outer thumb) and an <kbd>Alt Repeat</kbd> (inner
        thumb). Note that the same modifier key holds from the base layer;
        <kbd>Shift</kbd>, <kbd>Ctrl</kbd>, <kbd>Alt</kbd>, <kbd>Super</kbd>,
        <kbd>Hypr</kbd> and <kbd>Meh</kbd>; are also available on this layer.
        This makes the order that the (number) layer key and mod-keys are
        pressed insignificant.
        </p>
        <h2>Repeat & Alt Repeat</h2>
        <p>
        The <a href="https://docs.qmk.fm/features/repeat_key">Repeat</a> key is
        extremely useful on this board for instances when it is desired to
        repeat a keypress while holding the key. Most of the keys can't be held
        to repeat the keypress because they register as a modifier (Mod-Tap).
        The <kbd>Repeat</kbd> key can be used to work around this. For example,
        to register repeated <kbd>Backspace</kbd> keypresses by holding, first
        tap the <kbd>Backspace</kbd> key, then hold the <kbd>Repeat</kbd> key.
        </p>
        <p>
        Check out the
        <a href="https://docs.qmk.fm/features/repeat_key#alternate-repeating">
        Alternate Repeat documentation</a> for the list of supported
        completions. In addition to the default alternate repeat completions,
        the Phalanx (ab)uses this key for some basic autocompletions.
        </p>
        <table>
          <thead>
            <tr>
              <th>if last key pressed is...</th>
              <th>then <kbd>AltRpt</kbd> sends...</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <td><kbd>Tab</kbd></td>
              <td><kbd>Shift</kbd>+<kbd>Tab</kbd></td>
            </tr>
            <tr>
              <td><kbd>Shift</kbd>+<kbd>Tab</kbd></td>
              <td><kbd>Tab</kbd></td>
            </tr>
            <tr>
              <td><kbd>Ctrl</kbd>+<kbd>z</kbd></td>
              <td><kbd>Ctrl</kbd>+<kbd>y</kbd></td>
            </tr>
            <tr>
              <td><kbd>Ctrl</kbd>+<kbd>y</kbd></td>
              <td><kbd>Ctrl</kbd>+<kbd>z</kbd></td>
            </tr>
            <tr>
              <td><kbd>(</kbd></td>
              <td><kbd>)</kbd></td>
            </tr>
            <tr>
              <td><kbd>-</kbd></td>
              <td><kbd>&gt;</kbd></td>
            </tr>
            <tr>
              <td><kbd>=</kbd></td>
              <td><kbd>&gt;</kbd></td>
            </tr>
            <tr>
              <td><kbd>?</kbd></td>
              <td><kbd>Space</kbd> <kbd>Shift</kbd></td>
            </tr>
            <tr>
              <td><kbd>!</kbd></td>
              <td><kbd>Space</kbd> <kbd>Shift</kbd></td>
            </tr>
            <tr>
              <td><kbd>:</kbd></td>
              <td><kbd>Space</kbd> <kbd>Shift</kbd></td>
            </tr>
            <tr>
              <td><kbd>;</kbd></td>
              <td><kbd>Space</kbd> <kbd>Shift</kbd></td>
            </tr>
            <tr>
              <td><kbd>Space</kbd></td>
              <td><kbd>t</kbd> <kbd>h</kbd> <kbd>e</kbd></td>
            </tr>
            <tr>
              <td><kbd>Backspace</kbd></td>
              <td><kbd>t</kbd> <kbd>h</kbd> <kbd>e</kbd></td>
            </tr>
            <tr>
              <td><kbd>Enter</kbd></td>
              <td><kbd>t</kbd> <kbd>h</kbd> <kbd>e</kbd></td>
            </tr>
            <tr>
              <td><kbd>"</kbd></td>
              <td><kbd>t</kbd> <kbd>h</kbd> <kbd>e</kbd></td>
            </tr>
            <tr>
              <td><kbd>.</kbd></td>
              <td><kbd>.</kbd> <kbd>/</kbd></td>
            </tr>
            <tr>
              <td><kbd>i</kbd></td>
              <td><kbd>n</kbd> <kbd>g</kbd></td>
            </tr>
            <tr>
              <td><kbd>,</kbd></td>
              <td><kbd>Space</kbd> <kbd>b</kbd> <kbd>u</kbd> <kbd>t</kbd></td>
            </tr>
            <tr>
              <td><kbd>'</kbd></td>
              <td><kbd>l</kbd> <kbd>l</kbd></td>
            </tr>
            <tr>
              <td><kbd>#</kbd></td>
              <td><kbd>i</kbd> <kbd>n</kbd> <kbd>c</kbd> <kbd>l</kbd> <kbd>u</kbd> <kbd>d</kbd> <kbd>e</kbd></td>
            </tr>
          <tbody>
        </table>`,
      keys: [
        "`=-'   90[]",
        ["esc", ";", ",", ".", " ", " ", " ", 1, 2, 3, 4],
        ["z", "q", "\\", "/", " ", " ", " ", 5, 6, 7, 8],
        [" ", " ", " ", "alt rpt", "rpt", " ", "↹", "⏎"],
      ],
      holds: [
        ["hypr",  "meh", " ",    " ",     " ", " ", " ", " ",     " ",    "meh", "hypr"],
        ["super", "alt", "ctrl", "shift", " ", " ", " ", "shift", "ctrl", "alt", "super"],
        "           ",
        "        ",
      ],
    },
    {
      title: "symbol",
      description: `<p>
        This layer is basically the number layer plus <kbd>Shift</kbd> providing
        access to the rest of the symbols. The <kbd>Esc</kbd> key remains
        unshifted on this layer (since <kbd>Shift</kbd> + <kbd>Esc</kbd> is
        rarely useful). <kbd>q</kbd> and <kbd>z</kbd> are provided on the right
        hand thumbs as an alternative to those on the number layer. The left
        hand outer thumb is <kbd>Shift</kbd> + <kbd>Return</kbd>, which can be
        used as an OS shortcut such as launching a terminal emulator. On the
        left hand inner thumb is the key to cancel out of this one-shot layer
        and go back to the alpha layer (Note: this is the same key that entered
        the one-shot layer).
        </p>`,
      keys: [
        "~+_\"   (){}",
        ["esc", ":", "<", ">", " ", " ", " ", "!", "@", "#", "$"],
        ["Z", "Q", "|", "?", " ", " ", " ", "%", "^", "&", "*"],
        [" ", " ", " ", "alpha", "shift ⏎", " ", "q", "z"],
      ],
      holds: [
        [" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "],
        [" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "],
        "           ",
        "        ",
      ],
    },
    {
      title: "navigation",
      description: `<p>
        The navigation layer's right half provides mouse emulation, including
        mouse up/down/left/right, scroll wheel up/down, and mouse buttons 1-8.
        There is also a <kbd>Key Lock</kbd> for those times when holding click
        or another button is necessary. To disable <kbd>Key Lock</kbd> press the
        key that is locked again.
        </p>
        <p>
        The left half of this layer contains several keybindings that are useful
        for navigating in web browsers and selecting text with the mouse. In
        addition to the standard keys <kbd>Up</kbd>, <kbd>Down</kbd>,
        <kbd>Left</kbd>, <kbd>Right</kbd>, <kbd>PgUp</kbd>, <kbd>PgDn</kbd>,
        <kbd>Home</kbd>, <kbd>End</kbd> and <kbd>Del</kbd>, there are a few
        more complex bindings. The <kbd>Copy</kbd> key sends
        <kbd>Ctrl</kbd>+<kbd>c</kbd> when tapped and pastes with
        <kbd>Ctrl</kbd>+<kbd>v</kbd> when held. There are <kbd>NextTab</kbd> and
        <kbd>PrevTab</kbd> keys for switching between browser tabs when tapped.
        When held they send <kbd>Ctrl</kbd>+<kbd>y</kbd> (redo) and
        <kbd>Ctrl</kbd>+<kbd>z</kbd> (undo) respectively. The <kbd>Del</kbd> key
        can be held to close the current browser tab. <kbd>Tab</kbd> is on the
        outer thumb key when tapped and <kbd>Enter</kbd> when held. This is nice
        for tabbing through options and making a selection with one key. The
        inner thumb key, <kbd>Alpha</kbd>, exits this layer back to the base
        layer. This is only used when the navigation layer is locked.
        </p>
        <p>
        Modifier keys; <kbd>Shift</kbd>, <kbd>Ctrl</kbd>, <kbd>Alt</kbd>,
        <kbd>Super</kbd>, <kbd>Hypr</kbd> and <kbd>Meh</kbd>; are available as
        holds on the left half for use with mouse emulation. Also, holding the
        top row index finger's key holds down the mouse left <kbd>Click</kbd>.
        Holding the top row middle finger's key, <kbd>Word</kbd>, holds down the
        mouse left click, but selects by word.
        </p>
        <h2>Combos</h2>
        <p>
        A combo for <kbd>Esc</kbd> is available here along with combos for
        clicking the middle mouse button and for reopening the last closed
        browser tab.
        </p>`,
      keys: [
        ["pgup", "home", "⇧", "end", " ", " ", " ", "click", "↑", "right click", "⇡"],
        ["pgdn", "⇦", "⇩", "⇨", " ", " ", " ", "←", "↓", "→", "⇣"],
        ["del", "prev tab", "next tab", "copy", " ", " ", " ", "btn6", "btn7", "btn8", "key lock"],
        [" ", " ", " ", "alpha", "↹", " ", "btn4", "btn5", " ", " ", " "],
      ],
      holds: [
        ["hypr", "meh", "word", "click", " ", " ", " ", " ", " ", " ", " "],
        ["super", "alt", "ctrl", "shift", " ", " ", " ", " ", " ", " ", " "],
        ["close", "undo", "redo", "paste", " ", " ", " ", " ", " ", " ", " "],
        [" ", " ", " ", " ", "enter", " ", " ", " ", " ", " ", " "],
      ],
      combos: {
        "escape": [
          "0110   0000",
          "0000   0000",
          "0000   0000",
          "   00 00   ",
        ],
        "reopen tab": [
          "0000   0000",
          "0000   0000",
          "0110   0000",
          "   00 00   ",
        ],
        "middle click": [
          "0000   0110",
          "0000   0000",
          "0000   0000",
          "   00 00   ",
        ],
      },
    },
    {
      title: "system",
      description: `<p>
        Function keys <kbd>F1</kbd>-<kbd>F12</kbd> are located on the right side
        of the system layer and the outer thumb is the <kbd>SysRq</kbd> key. All
        of the modifier keys are available as holds on the home row with
        <kbd>Hypr</kbd> and <kbd>Meh</kbd> on the top row. <kbd>Insert</kbd>,
        <kbd>Pause</kbd>, <kbd>Scrlk</kbd> and <kbd>PrtSc</kbd> are holds on the
        bottom row. Quickly double-tap any of the <kbd>Fn</kbd> keys between
        <kbd>F1</kbd> and <kbd>F6</kbd> to switch to the nth virtual console on
        most Linux systems (<kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>Fn</kbd>).
        </p>
        <p>
        The left side of the system layer has most of the same keys from the
        navigation layer in the same positions; <kbd>Up</kbd>, <kbd>Down</kbd>,
        <kbd>Left</kbd>, <kbd>Right</kbd>, <kbd>PgUp</kbd>, <kbd>PgDn</kbd>,
        <kbd>Home</kbd>, <kbd>End</kbd> and <kbd>Del</kbd>. They don't have any
        hold behavior on this layer, thus can be held for key repeat purposes.
        The bottom row of the left side has a media button, <kbd>♫</kbd>, which
        toggles the media play/pause. <kbd>Ctrl</kbd>+<kbd>♫</kbd> toggles
        volume mute. <kbd>Alt</kbd>+<kbd>♫</kbd> launches media player (if
        configured on the OS). <kbd>VolUp</kbd> and <kbd>VolDn</kbd> control the
        volume, however <kbd>Ctrl</kbd>+<kbd>VolUp</kbd> and
        <kbd>Ctrl</kbd>+<kbd>VolDn</kbd> send media next track and previous
        track keys. <kbd>Alt</kbd>+<kbd>VolUp</kbd> and
        <kbd>Alt</kbd>+<kbd>VolDn</kbd> control brightness.
        </p>
        <p>
        Now, WTF are the star keys? They are just a few basic autocompletions
        similar to those on the number layer's <kbd>AltRpt</kbd> key.
        </p>
        <table>
          <thead>
            <tr>
              <th>if last key pressed is...</th>
              <th>then <kbd>☆</kbd> sends...</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <td><kbd>.</kbd></td>
              <td><kbd>c</kbd> <kbd>o</kbd> <kbd>m</kbd></td>
            </tr>
            <tr>
              <td><kbd>'</kbd></td>
              <td><kbd>r</kbd> <kbd>e</kbd></td>
            </tr>
            <tr>
              <td><kbd>,</kbd></td>
              <td><kbd>Space</kbd> <kbd>h</kbd> <kbd>o</kbd> <kbd>w</kbd> <kbd>e</kbd> <kbd>v</kbd> <kbd>e</kbd> <kbd>r</kbd></td>
            </tr>
            <tr>
              <td><kbd>Space</kbd></td>
              <td><kbd>a</kbd> <kbd>n</kbd> <kbd>d</kbd></td>
            </tr>
            <tr>
              <td><kbd>Backspace</kbd></td>
              <td><kbd>a</kbd> <kbd>n</kbd> <kbd>d</kbd></td>
            </tr>
            <tr>
              <td><kbd>Enter</kbd></td>
              <td><kbd>a</kbd> <kbd>n</kbd> <kbd>d</kbd></td>
            </tr>
            <tr>
              <td><kbd>"</kbd></td>
              <td><kbd>a</kbd> <kbd>n</kbd> <kbd>d</kbd></td>
            </tr>
          </tbody>
        </table>
        <table>
          <thead>
            <tr>
              <th>if last key pressed is...</th>
              <th>then <kbd>★</kbd> sends...</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <td><kbd>.</kbd></td>
              <td><kbd>o</kbd> <kbd>r</kbd> <kbd>g</kbd></td>
            </tr>
            <tr>
              <td><kbd>'</kbd></td>
              <td><kbd>v</kbd> <kbd>e</kbd></td>
            </tr>
            <tr>
              <td><kbd>,</kbd></td>
              <td><kbd>Space</kbd> <kbd>s</kbd> <kbd>i</kbd> <kbd>n</kbd> <kbd>c</kbd> <kbd>e</kbd></td>
            </tr>
            <tr>
              <td><kbd>Space</kbd></td>
              <td><kbd>f</kbd> <kbd>o</kbd> <kbd>r</kbd></td>
            </tr>
            <tr>
              <td><kbd>Backspace</kbd></td>
              <td><kbd>f</kbd> <kbd>o</kbd> <kbd>r</kbd></td>
            </tr>
            <tr>
              <td><kbd>Enter</kbd></td>
              <td><kbd>f</kbd> <kbd>o</kbd> <kbd>r</kbd></td>
            </tr>
            <tr>
              <td><kbd>"</kbd></td>
              <td><kbd>f</kbd> <kbd>o</kbd> <kbd>r</kbd></td>
            </tr>
          </tbody>
        </table>`,
      keys: [
        ["pgup", "home", "⇧", "end", " ", " ", " ", "F9", "F10", "F11", "F12"],
        ["pgdn", "⇦", "⇩", "⇨", " ", " ", " ", "F1", "F2", "F3", "F4"],
        ["del", "vol dn", "vol up", "♫", " ", " ", " ", "F5", "F6", "F7", "F8"],
        [" ", " ", " ", "★", "☆", " ", "sysrq", "⮾", " ", " ", " "],
      ],
      holds: [
        [" ", " ", " ", " ", " ", " ", " ", " ", " ", "meh", "hypr"],
        [" ", " ", " ", " ", " ", " ", " ", "shift", "ctrl", "alt", "super"],
        [" ", " ", " ", " ", " ", " ", " ", "insert", "pause", "scrlk", "prtsc"],
        "        ",
      ],
    },
  ],
}
