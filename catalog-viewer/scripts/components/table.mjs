/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * Catalog Viewer
 */

export class Table {
  constructor(rows = []) {
    this.table = document.createElement('table');
    this.table.classList.add('table');

    rows.forEach(row => {
      this.addRow(row);
    });
  }

  addRow(row) {
    this.table.appendChild(row.getRow());
  }

  getTable() {
    return this.table;
  }
}
