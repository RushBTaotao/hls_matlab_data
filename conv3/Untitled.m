
% clear all;
% close all;
% in=randi([-10,10],10,10,20);
% 
% fid=fopen('dtest.bin','wb');
% fwrite(fid,int16(in),'int16');
% fclose(fid);
% 
% 
% fid=fopen('dtest.bin','rb');
% a=fread(fid,2000,'int16');
% fclose(fid);

clear all;
close all;
in_0=randi([-10,10],8,8,20);
%in_0=rand(8,8,20);
in=zeros(10,10,20);

in(2:9,2:9,:)=in_0;

weight=randi([-5,5],3,3,20);
%out=zeros(9,9,20);

for i=1:20
out_0(:,:,i)=conv2(in(:,:,i),rot90(weight(:,:,i),2),'valid');
end 

out=zeros(10,10,20);
out(2:9,2:9,:)=out_0;

for i=1:20
inin(:,:,i)=in(:,:,i)';
end 
b=reshape(inin,numel(inin),1);
fid=fopen('datain.bin','wb');
count=fwrite(fid,int16(b),'int16');
fclose(fid);


for i=1:20
outout(:,:,i)=out(:,:,i)';
end 
d=reshape(outout,numel(outout),1);
fid=fopen('dataout.bin','wb');
count=fwrite(fid,int16(d),'int16');
fclose(fid);



for i=1:20
weightweight(:,:,i)=weight(:,:,i)';
end 
fid=fopen('weight.bin','wb');
count=fwrite(fid,int16(reshape(weightweight,numel(weight),1)),'int16');
fclose(fid);




