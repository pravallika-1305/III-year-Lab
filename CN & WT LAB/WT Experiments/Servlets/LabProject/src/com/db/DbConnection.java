package com.db;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class DbConnection {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.jdbc.Driver");
			try {
				Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/it18","root","root");
				Statement stmt = con.createStatement();
				System.out.println("Connection Established");
				ResultSet rs = stmt.executeQuery("select * from employee");
				while(rs.next()) {
					System.out.println("The empId is: " + rs.getInt(1) + " " + ", employee name is: " + (rs.getString(2)) + ", employee salary is: " + (rs.getInt(3)));
                    				
				}
				stmt.close();
				con.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
}