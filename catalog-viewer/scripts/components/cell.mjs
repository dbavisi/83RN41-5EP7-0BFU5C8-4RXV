/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * Catalog Viewer
 */

export class Cell {
  constructor(isHeader = false, content = '') {
    this.cell = document.createElement(isHeader ? 'th' : 'td');
    this.cell.classList.add('cell');
    this.cell.textContent = content;
  }

  setCellContent(content) {
    this.cell.textContent = content;
  }

  getCell() {
    return this.cell;
  }
}
