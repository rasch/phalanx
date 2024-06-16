//========================================
// #kbd .{title}
//   .keymap
//     .row
//       .space | .key .active? .length-N
//         .hold
//     ...
//   .controls
//     button | button.selected
//   .description
//   .combos
//     .combo
//       .label
//       .row
//         .space | .key .pressed?
//       ...
//     ...
//========================================

const dom = keymap => index => ({
  tag: "figure",
  id: "kbd",
  class: keymap.title.toLowerCase().replace(/\s/g, "-"),
  children: [
    {
      tag: "div",
      class: "keymap",
      children: keymap.layers[index].keys.map((row, y) => ({
        tag: "div",
        class: "row",
        children: [...row].map((char, x) => ({
          tag: "span",
          class:
            char === " "
              ? "space"
              : `key length-${char.length}` +
                (keymap.layers[index].title.startsWith(
                  keymap.layers[0].holds[y][x],
                )
                  ? " active"
                  : ""),
          textContent: char === "⮾" ? "" : char,
          children: [
            {
              tag: "span",
              class: "hold",
              textContent: keymap.layers[index].holds[y][x],
            },
          ],
        })),
      })),
    },
    {
      tag: "div",
      id: "controls",
      class: "controls",
      children: keymap.layers.map((layer, i) => ({
        tag: "button",
        textContent: layer.title,
        class: i === index ? "selected" : undefined,
        value: i,
      })),
    },
    {
      tag: "figcaption",
      class: "layer-description",
      innerHTML: keymap.layers[index].description,
      children: [
        {
          tag: "div",
          class: "combos",
          children: keymap.layers[index].combos
            ? Object.keys(keymap.layers[index].combos).map(c => ({
                tag: "div",
                class: "combo",
                children: [
                  {
                    tag: "div",
                    class: "label",
                    textContent: c,
                  },
                  ...keymap.layers[index].combos[c].map(l => ({
                    tag: "div",
                    class: "row",
                    children: [...l].map(r => ({
                      tag: "span",
                      class:
                        r === "0" ? "key" : r === "1" ? "key pressed" : "space",
                    })),
                  })),
                ],
              }))
            : undefined,
        },
      ]
    },
  ],
})

const createElement = node => {
  const element = document.createElement(node.tag)

  Object.keys(node).forEach(attr => {
    if (node[attr] !== undefined) {
      switch (attr) {
        case "children":
          node[attr].forEach(child => element.appendChild(createElement(child)))
          break
        case "tag":
          break
        case "innerHTML":
        case "textContent":
          element[attr] = node[attr]
          break
        default:
          element.setAttribute(attr, node[attr])
      }
    }
  })

  return element
}

const scaleKeymap = () => {
  const km = document.getElementsByClassName("keymap")[0]
  const scale = window.innerWidth / 374
  const max = 2
  km.style.scale = scale > max ? max : scale
}

export const render = keymap => layer => {
  kbd.replaceWith(createElement(dom(keymap)(layer)))
  controls.addEventListener("click", e => {
    e.target.value && render(keymap)(Number(e.target.value))
  })
  scaleKeymap()
  window.addEventListener("resize", scaleKeymap)
}
