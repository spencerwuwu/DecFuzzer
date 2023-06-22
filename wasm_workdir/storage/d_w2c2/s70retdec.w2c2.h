#ifndef s70retdec_H
#define s70retdec_H

#include "w2c2_base.h"

typedef struct s70retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s70retdecInstance;

void f0(s70retdecInstance*);

void f1(s70retdecInstance*);

U32 f2(s70retdecInstance*);

void f3(s70retdecInstance*,U32);

U32 f4(s70retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s70retdecInstance*,U32,U32,U32,U32,U32);

void f6(s70retdecInstance*,U32);

void f7(s70retdecInstance*,U32,U32,U32);

void f8(s70retdecInstance*,U32,U32,U32);

void s70retdec____wasm_call_ctors(s70retdecInstance*i);

void s70retdec____wasm_apply_data_relocs(s70retdecInstance*i);

U32 s70retdec_func_1(s70retdecInstance*i);

void s70retdec_call_cb(s70retdecInstance*i,U32 l0);

void s70retdecInstantiate(s70retdecInstance* instance, void* resolve(const char* module, const char* name));

void s70retdecFreeInstance(s70retdecInstance* instance);

#endif /* s70retdec_H */

