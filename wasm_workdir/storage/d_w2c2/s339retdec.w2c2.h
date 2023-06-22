#ifndef s339retdec_H
#define s339retdec_H

#include "w2c2_base.h"

typedef struct s339retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s339retdecInstance;

void f0(s339retdecInstance*);

void f1(s339retdecInstance*);

U32 f2(s339retdecInstance*);

void f3(s339retdecInstance*,U32);

U32 f4(s339retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s339retdecInstance*,U32,U32,U32,U32,U32);

void f6(s339retdecInstance*,U32);

void f7(s339retdecInstance*,U32,U32,U32);

void f8(s339retdecInstance*,U32,U32,U32);

void s339retdec____wasm_call_ctors(s339retdecInstance*i);

void s339retdec____wasm_apply_data_relocs(s339retdecInstance*i);

U32 s339retdec_func_1(s339retdecInstance*i);

void s339retdec_call_cb(s339retdecInstance*i,U32 l0);

void s339retdecInstantiate(s339retdecInstance* instance, void* resolve(const char* module, const char* name));

void s339retdecFreeInstance(s339retdecInstance* instance);

#endif /* s339retdec_H */

