CREATE DATABASE IF NOT EXISTS gestion_inventaire;
USE gestion_inventaire;

CREATE TABLE IF NOT EXISTS produits (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nom VARCHAR(50) NOT NULL,
    quantite INT DEFAULT 0,
    prix DOUBLE DEFAULT 0.0
);