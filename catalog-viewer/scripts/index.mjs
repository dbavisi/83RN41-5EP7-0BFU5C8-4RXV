import { Cell } from "./components/cell.mjs";
import { Row } from "./components/row.mjs";
import { Table } from "./components/table.mjs";

async function loadCatalog() {
  const response = await fetch('/HMFHCJ-NX2Y-M4GNDSW-168R/HMFHCJ-NX2Y-M4GNDSW-168R.json');
  const catalog = await response.json();
  console.log(catalog);
  return catalog;
}

async function renderCatalog() {
  const catalog = await loadCatalog();
  const rows = [];
  Object.keys(catalog).forEach((key, index) => {
    const cells = [];
    cells.push(new Cell(true, key));
    Object.keys(catalog[key]).forEach((key2, index2) => {
      cells.push(new Cell(false, catalog[key][key2]));
    });
    const row = new Row(false, cells);
    rows.push(row);
  });
  const table = new Table(rows);
  document.body.appendChild(table.getTable());
}

renderCatalog();
