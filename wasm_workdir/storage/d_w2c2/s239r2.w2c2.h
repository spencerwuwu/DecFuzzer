#ifndef s239r2_H
#define s239r2_H

#include "w2c2_base.h"

typedef struct s239r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s239r2Instance;

void f0(s239r2Instance*);

void f1(s239r2Instance*);

U32 f2(s239r2Instance*);

void f3(s239r2Instance*,U32);

U32 f4(s239r2Instance*,U32,U32,U32);

void f5(s239r2Instance*,U32,U32,U32,U32,U32);

void f6(s239r2Instance*,U32);

void f7(s239r2Instance*,U32,U32,U32);

void f8(s239r2Instance*,U32,U32,U32);

void s239r2____wasm_call_ctors(s239r2Instance*i);

void s239r2____wasm_apply_data_relocs(s239r2Instance*i);

U32 s239r2_func_1(s239r2Instance*i);

void s239r2_call_cb(s239r2Instance*i,U32 l0);

void s239r2Instantiate(s239r2Instance* instance, void* resolve(const char* module, const char* name));

void s239r2FreeInstance(s239r2Instance* instance);

#endif /* s239r2_H */

