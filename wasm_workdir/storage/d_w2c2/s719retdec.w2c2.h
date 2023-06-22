#ifndef s719retdec_H
#define s719retdec_H

#include "w2c2_base.h"

typedef struct s719retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s719retdecInstance;

void f0(s719retdecInstance*);

void f1(s719retdecInstance*);

U32 f2(s719retdecInstance*);

void f3(s719retdecInstance*,U32);

U32 f4(s719retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s719retdecInstance*,U32,U32,U32,U32,U32);

void f6(s719retdecInstance*,U32);

void f7(s719retdecInstance*,U32,U32,U32);

void f8(s719retdecInstance*,U32,U32,U32);

void s719retdec____wasm_call_ctors(s719retdecInstance*i);

void s719retdec____wasm_apply_data_relocs(s719retdecInstance*i);

U32 s719retdec_func_1(s719retdecInstance*i);

void s719retdec_call_cb(s719retdecInstance*i,U32 l0);

void s719retdecInstantiate(s719retdecInstance* instance, void* resolve(const char* module, const char* name));

void s719retdecFreeInstance(s719retdecInstance* instance);

#endif /* s719retdec_H */

