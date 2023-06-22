#ifndef s694retdec_H
#define s694retdec_H

#include "w2c2_base.h"

typedef struct s694retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s694retdecInstance;

void f0(s694retdecInstance*);

void f1(s694retdecInstance*);

U32 f2(s694retdecInstance*);

void f3(s694retdecInstance*,U32);

U32 f4(s694retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s694retdecInstance*,U32,U32,U32,U32,U32);

void f6(s694retdecInstance*,U32);

void f7(s694retdecInstance*,U32,U32,U32);

void f8(s694retdecInstance*,U32,U32,U32);

void s694retdec____wasm_call_ctors(s694retdecInstance*i);

void s694retdec____wasm_apply_data_relocs(s694retdecInstance*i);

U32 s694retdec_func_1(s694retdecInstance*i);

void s694retdec_call_cb(s694retdecInstance*i,U32 l0);

void s694retdecInstantiate(s694retdecInstance* instance, void* resolve(const char* module, const char* name));

void s694retdecFreeInstance(s694retdecInstance* instance);

#endif /* s694retdec_H */

