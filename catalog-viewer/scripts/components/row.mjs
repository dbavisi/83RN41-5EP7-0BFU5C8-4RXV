/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * Catalog Viewer
 */

export class Row {
  constructor(isHeader = false, cells = []) {
    this.row = document.createElement('tr');
    this.row.classList.add('row');

    cells.forEach(cell => {
      this.addCell(cell);
    });
  }

  addCell(cell) {
    this.row.appendChild(cell.getCell());
  }

  getRow() {
    return this.row;
  }
}
