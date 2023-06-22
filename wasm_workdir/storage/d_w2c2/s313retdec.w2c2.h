#ifndef s313retdec_H
#define s313retdec_H

#include "w2c2_base.h"

typedef struct s313retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s313retdecInstance;

void f0(s313retdecInstance*);

void f1(s313retdecInstance*);

U32 f2(s313retdecInstance*);

void f3(s313retdecInstance*,U32);

U32 f4(s313retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s313retdecInstance*,U32,U32,U32,U32,U32);

void f6(s313retdecInstance*,U32);

void f7(s313retdecInstance*,U32,U32,U32);

void f8(s313retdecInstance*,U32,U32,U32);

void s313retdec____wasm_call_ctors(s313retdecInstance*i);

void s313retdec____wasm_apply_data_relocs(s313retdecInstance*i);

U32 s313retdec_func_1(s313retdecInstance*i);

void s313retdec_call_cb(s313retdecInstance*i,U32 l0);

void s313retdecInstantiate(s313retdecInstance* instance, void* resolve(const char* module, const char* name));

void s313retdecFreeInstance(s313retdecInstance* instance);

#endif /* s313retdec_H */

