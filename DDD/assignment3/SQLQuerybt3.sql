CREATE TABLE bo_phan(
	bp_id int IDENTITY(1,1) PRIMARY KEY,
	ten_bp varchar(200)
);
CREATE TABLE nhan_vien(
	nv_id int IDENTITY(10,1) PRIMARY KEY,
	ten_nv varchar(200),
	ngay_sinh date,
	dia_chi text,
	dien_thoai int,
	bang_cap varchar(200),
	muc_luong varchar(200),
	bp_id int FOREIGN KEY REFERENCES bo_phan(bp_id)
);
CREATE TABLE thiet_bi(
	tb_id int IDENTITY(100,1) PRIMARY KEY,
	ten_tb varchar(200),
	so_luong int,
	nv_id int FOREIGN KEY REFERENCES nhan_vien(nv_id)
);