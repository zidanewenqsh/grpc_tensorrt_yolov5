#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import pymysql
# Connect to the database
with pymysql.connect(host='172.16.1.2', port=3306, user='ai', password='12345678', database='MyYoloDB') as conn:
    with conn.cursor() as cursor:
        # SQL 命令
        create_images_table = """
        CREATE TABLE IF NOT EXISTS images (
            image_id INT AUTO_INCREMENT PRIMARY KEY,
            file_name VARCHAR(255) NOT NULL,
            upload_time DATETIME,
            source VARCHAR(255)
        );
        """

        create_detections_table = """
        CREATE TABLE IF NOT EXISTS detections (
            detection_id INT AUTO_INCREMENT PRIMARY KEY,
            image_id INT,
            confidence FLOAT,
            class_index INT,
            bbox_xmin INT,
            bbox_ymin INT,
            bbox_xmax INT,
            bbox_ymax INT,
            detection_time DATETIME,
            FOREIGN KEY (image_id) REFERENCES images(image_id)
        );
        """
        cursor.execute(create_images_table)
        print("Table 'images' created successfully.")

        # 创建 detections 表
        cursor.execute(create_detections_table)
        print("Table 'detections' created successfully.")
        conn.commit()
        # Create table
        # cursor.execute("CREATE TABLE IF NOT EXISTS users (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255), age INT)")

        # # Clear the table
        # cursor.execute("DELETE FROM users")
        # conn.commit()

        # # Insert a record
        # cursor.execute("INSERT INTO users (name, age) VALUES ('Alice', 30)")
        # conn.commit()

        # # Query records
        # cursor.execute("SELECT * FROM users")
        # print(cursor.fetchall())

        # # Update a record
        # cursor.execute("UPDATE users SET age=31 WHERE name='Alice'")
        # conn.commit()

        # Delete a record
        # cursor.execute("DELETE FROM users WHERE name='Alice'")
        # conn.commit()

        # Close the connection
        # cursor.close()
        # conn.close()
