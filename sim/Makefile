VERILATOR ?= verilator
TOP       ?= tb_rvec32i
PREFETCH  ?= 1
DEPTH     ?= 2
OUT       ?= simv_pf_d$(DEPTH)
OBJ_DIR   ?= obj_dir_pf_d$(DEPTH)

SV_SRCS := \
	../rvec32i.sv \
	../rtl_sv/instruction_prefetch_buffer.sv \
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
		-GENABLE_PREFETCH=$(PREFETCH) -GPREFETCH_DEPTH=$(DEPTH) \
		--top-module $(TOP) --binary --Mdir $(OBJ_DIR) \
		-o $(OUT) $(SV_SRCS)

run: $(OUT)
	cd .. && ./sim/$(OBJ_DIR)/$(OUT)

run_all: run_all_pf

base:
	$(MAKE) PREFETCH=0 DEPTH=2 OUT=simv_base OBJ_DIR=obj_dir_base all

pf:
	$(MAKE) PREFETCH=1 DEPTH=$(DEPTH) OUT=simv_pf_d$(DEPTH) OBJ_DIR=obj_dir_pf_d$(DEPTH) all

run_base: base
	cd .. && for k in Algorithms/rv32i/*.s; do \
		printf "**************************************************\n* Running base %s\n**************************************************\n" "$$k"; \
		./sim/obj_dir_base/simv_base +KERNEL=$$k || exit $$?; \
	done

run_all_pf: pf
	cd .. && for k in Algorithms/rv32i/*.s; do \
		printf "**************************************************\n* Running PF DEPTH=$(DEPTH) %s\n**************************************************\n" "$$k"; \
		./sim/obj_dir_pf_d$(DEPTH)/simv_pf_d$(DEPTH) +KERNEL=$$k || exit $$?; \
	done

benchmark:
	python3 run_benchmarks.py

clean:
	rm -rf obj_dir* wave.vcd wave_base.vcd wave_pf.vcd
