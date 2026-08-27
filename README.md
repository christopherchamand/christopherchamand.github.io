# christopherchamand.github.io

Le site d'un enseignant : support de cours en ligne pour la **SNT** (Sciences Numériques et Technologie, seconde) et le **STI2D** (spécialités **AC** - Architecture et Construction, et **I2D** - Innovation et Développement Durable).

Site en ligne : [christopherchamand.github.io](https://christopherchamand.github.io)

## Stack

- [MkDocs](https://www.mkdocs.org/) + [Material for MkDocs](https://squidfunk.github.io/mkdocs-material/)
- Déploiement automatique sur GitHub Pages via GitHub Actions à chaque push sur `main`/`master`

## Lancer le site en local

```bash
python -m venv venv
venv\Scripts\activate        # sous Windows
pip install mkdocs-material
mkdocs serve
```

Le site est alors disponible sur `http://127.0.0.1:8000`.
