VERILATOR ?= verilator
TOP       ?= tb_rvec32i
OUT       ?= simv

SV_SRCS := \
	../rvec32i.sv \
	../rtl_sv/alu.sv \
	../rtl_sv/CU.sv \
	../rtl_sv/cont.sv \
	../rtl_sv/data_m.sv \
	../rtl_sv/decoder.sv \
	../rtl_sv/generic_muc.sv \
	../rtl_sv/mux2_1.sv \
	../rtl_sv/mux32.sv \
	../rtl_sv/mux_4b.sv \
	../rtl_sv/mux_c.sv \
	../rtl_sv/one.sv \
	../rtl_sv/p.sv \
	../rtl_sv/prog_m.sv \
	../rtl_sv/reg_b.sv \
	../rtl_sv/sign_e.sv \
	../rtl_sv/sign_oe.sv \
	../rtl_sv/slicer.sv \
	../rtl_sv/sum.sv \
	../rtl_sv/unidor.sv \
	./tb_rvec32i.sv

all: $(OUT)

$(OUT): $(SV_SRCS)
	$(VERILATOR) -Wall --trace --timing --language 1800-2017 \
		-Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
		--top-module $(TOP) --binary --Mdir obj_dir \
		-o $(OUT) $(SV_SRCS)

run: $(OUT)
	./obj_dir/$(OUT)

clean:
	rm -rf obj_dir wave.vcd
