#ifndef s757retdec_H
#define s757retdec_H

#include "w2c2_base.h"

typedef struct s757retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s757retdecInstance;

void f0(s757retdecInstance*);

void f1(s757retdecInstance*);

U32 f2(s757retdecInstance*);

void f3(s757retdecInstance*,U32);

U32 f4(s757retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s757retdecInstance*,U32,U32,U32,U32,U32);

void f6(s757retdecInstance*,U32);

void f7(s757retdecInstance*,U32,U32,U32);

void f8(s757retdecInstance*,U32,U32,U32);

void s757retdec____wasm_call_ctors(s757retdecInstance*i);

void s757retdec____wasm_apply_data_relocs(s757retdecInstance*i);

U32 s757retdec_func_1(s757retdecInstance*i);

void s757retdec_call_cb(s757retdecInstance*i,U32 l0);

void s757retdecInstantiate(s757retdecInstance* instance, void* resolve(const char* module, const char* name));

void s757retdecFreeInstance(s757retdecInstance* instance);

#endif /* s757retdec_H */

