#ifndef s512retdec_H
#define s512retdec_H

#include "w2c2_base.h"

typedef struct s512retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s512retdecInstance;

void f0(s512retdecInstance*);

void f1(s512retdecInstance*);

U32 f2(s512retdecInstance*);

void f3(s512retdecInstance*,U32);

U32 f4(s512retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s512retdecInstance*,U32,U32,U32,U32,U32);

void f6(s512retdecInstance*,U32);

void f7(s512retdecInstance*,U32,U32,U32);

void f8(s512retdecInstance*,U32,U32,U32);

void s512retdec____wasm_call_ctors(s512retdecInstance*i);

void s512retdec____wasm_apply_data_relocs(s512retdecInstance*i);

U32 s512retdec_func_1(s512retdecInstance*i);

void s512retdec_call_cb(s512retdecInstance*i,U32 l0);

void s512retdecInstantiate(s512retdecInstance* instance, void* resolve(const char* module, const char* name));

void s512retdecFreeInstance(s512retdecInstance* instance);

#endif /* s512retdec_H */

